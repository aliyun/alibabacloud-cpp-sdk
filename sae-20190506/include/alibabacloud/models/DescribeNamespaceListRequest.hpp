// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENAMESPACELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENAMESPACELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeNamespaceListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNamespaceListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContainCustom, containCustom_);
      DARABONBA_PTR_TO_JSON(HybridCloudExclude, hybridCloudExclude_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNamespaceListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainCustom, containCustom_);
      DARABONBA_PTR_FROM_JSON(HybridCloudExclude, hybridCloudExclude_);
    };
    DescribeNamespaceListRequest() = default ;
    DescribeNamespaceListRequest(const DescribeNamespaceListRequest &) = default ;
    DescribeNamespaceListRequest(DescribeNamespaceListRequest &&) = default ;
    DescribeNamespaceListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNamespaceListRequest() = default ;
    DescribeNamespaceListRequest& operator=(const DescribeNamespaceListRequest &) = default ;
    DescribeNamespaceListRequest& operator=(DescribeNamespaceListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->containCustom_ == nullptr
        && this->hybridCloudExclude_ == nullptr; };
    // containCustom Field Functions 
    bool hasContainCustom() const { return this->containCustom_ != nullptr;};
    void deleteContainCustom() { this->containCustom_ = nullptr;};
    inline bool getContainCustom() const { DARABONBA_PTR_GET_DEFAULT(containCustom_, false) };
    inline DescribeNamespaceListRequest& setContainCustom(bool containCustom) { DARABONBA_PTR_SET_VALUE(containCustom_, containCustom) };


    // hybridCloudExclude Field Functions 
    bool hasHybridCloudExclude() const { return this->hybridCloudExclude_ != nullptr;};
    void deleteHybridCloudExclude() { this->hybridCloudExclude_ = nullptr;};
    inline bool getHybridCloudExclude() const { DARABONBA_PTR_GET_DEFAULT(hybridCloudExclude_, false) };
    inline DescribeNamespaceListRequest& setHybridCloudExclude(bool hybridCloudExclude) { DARABONBA_PTR_SET_VALUE(hybridCloudExclude_, hybridCloudExclude) };


  protected:
    // Specifies whether to return custom namespaces. Valid values:
    // 
    // *   **true**: The system returns custom namespaces.
    // *   **false**: The system does not return custom namespaces.
    shared_ptr<bool> containCustom_ {};
    // Indicates whether hybrid cloud namespaces are excluded. Valid values:
    // 
    // *   **true**: Hybrid cloud namespaces are excluded.
    // *   **false**: Hybrid cloud namespaces are included.
    shared_ptr<bool> hybridCloudExclude_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
