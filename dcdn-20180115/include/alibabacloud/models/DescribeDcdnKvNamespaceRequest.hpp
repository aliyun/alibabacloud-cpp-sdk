// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNKVNAMESPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNKVNAMESPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnKvNamespaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnKvNamespaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnKvNamespaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    DescribeDcdnKvNamespaceRequest() = default ;
    DescribeDcdnKvNamespaceRequest(const DescribeDcdnKvNamespaceRequest &) = default ;
    DescribeDcdnKvNamespaceRequest(DescribeDcdnKvNamespaceRequest &&) = default ;
    DescribeDcdnKvNamespaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnKvNamespaceRequest() = default ;
    DescribeDcdnKvNamespaceRequest& operator=(const DescribeDcdnKvNamespaceRequest &) = default ;
    DescribeDcdnKvNamespaceRequest& operator=(DescribeDcdnKvNamespaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->namespace_ != nullptr; };
    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeDcdnKvNamespaceRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // The name of the namespace.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
