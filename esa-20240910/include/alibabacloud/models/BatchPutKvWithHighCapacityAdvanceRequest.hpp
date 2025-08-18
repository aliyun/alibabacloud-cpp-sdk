// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHPUTKVWITHHIGHCAPACITYADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHPUTKVWITHHIGHCAPACITYADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class BatchPutKvWithHighCapacityAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchPutKvWithHighCapacityAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_TO_JSON(Url, urlObject_);
    };
    friend void from_json(const Darabonba::Json& j, BatchPutKvWithHighCapacityAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_FROM_JSON(Url, urlObject_);
    };
    BatchPutKvWithHighCapacityAdvanceRequest() = default ;
    BatchPutKvWithHighCapacityAdvanceRequest(const BatchPutKvWithHighCapacityAdvanceRequest &) = default ;
    BatchPutKvWithHighCapacityAdvanceRequest(BatchPutKvWithHighCapacityAdvanceRequest &&) = default ;
    BatchPutKvWithHighCapacityAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchPutKvWithHighCapacityAdvanceRequest() = default ;
    BatchPutKvWithHighCapacityAdvanceRequest& operator=(const BatchPutKvWithHighCapacityAdvanceRequest &) = default ;
    BatchPutKvWithHighCapacityAdvanceRequest& operator=(BatchPutKvWithHighCapacityAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->namespace_ != nullptr
        && this->urlObject_ != nullptr; };
    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline BatchPutKvWithHighCapacityAdvanceRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // urlObject Field Functions 
    bool hasUrlObject() const { return this->urlObject_ != nullptr;};
    void deleteUrlObject() { this->urlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> urlObject() const { DARABONBA_GET(urlObject_) };
    inline BatchPutKvWithHighCapacityAdvanceRequest& setUrlObject(shared_ptr<Darabonba::IStream> urlObject) { DARABONBA_SET_VALUE(urlObject_, urlObject) };


  protected:
    // The name of the namespace that you specify when you call the [CreateKvNamespace](https://help.aliyun.com/document_detail/2850317.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // The download URL of the key-value pairs that you want to configure. This parameter is automatically filled in when you use the SDK to call the operation.
    // 
    // This parameter is required.
    shared_ptr<Darabonba::IStream> urlObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
