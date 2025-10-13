// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENAMESPACERESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENAMESPACERESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeNamespaceResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNamespaceResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NameSpaceShortId, nameSpaceShortId_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNamespaceResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NameSpaceShortId, nameSpaceShortId_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
    };
    DescribeNamespaceResourcesRequest() = default ;
    DescribeNamespaceResourcesRequest(const DescribeNamespaceResourcesRequest &) = default ;
    DescribeNamespaceResourcesRequest(DescribeNamespaceResourcesRequest &&) = default ;
    DescribeNamespaceResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNamespaceResourcesRequest() = default ;
    DescribeNamespaceResourcesRequest& operator=(const DescribeNamespaceResourcesRequest &) = default ;
    DescribeNamespaceResourcesRequest& operator=(DescribeNamespaceResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nameSpaceShortId_ == nullptr
        && return this->namespaceId_ == nullptr; };
    // nameSpaceShortId Field Functions 
    bool hasNameSpaceShortId() const { return this->nameSpaceShortId_ != nullptr;};
    void deleteNameSpaceShortId() { this->nameSpaceShortId_ = nullptr;};
    inline string nameSpaceShortId() const { DARABONBA_PTR_GET_DEFAULT(nameSpaceShortId_, "") };
    inline DescribeNamespaceResourcesRequest& setNameSpaceShortId(string nameSpaceShortId) { DARABONBA_PTR_SET_VALUE(nameSpaceShortId_, nameSpaceShortId) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline DescribeNamespaceResourcesRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


  protected:
    std::shared_ptr<string> nameSpaceShortId_ = nullptr;
    // cn-shanghai:test
    std::shared_ptr<string> namespaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
