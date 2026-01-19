// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETEKVWITHHIGHCAPACITYADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETEKVWITHHIGHCAPACITYADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class BatchDeleteKvWithHighCapacityAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteKvWithHighCapacityAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      // urlObject_ is stream
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteKvWithHighCapacityAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      // urlObject_ is stream
    };
    BatchDeleteKvWithHighCapacityAdvanceRequest() = default ;
    BatchDeleteKvWithHighCapacityAdvanceRequest(const BatchDeleteKvWithHighCapacityAdvanceRequest &) = default ;
    BatchDeleteKvWithHighCapacityAdvanceRequest(BatchDeleteKvWithHighCapacityAdvanceRequest &&) = default ;
    BatchDeleteKvWithHighCapacityAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteKvWithHighCapacityAdvanceRequest() = default ;
    BatchDeleteKvWithHighCapacityAdvanceRequest& operator=(const BatchDeleteKvWithHighCapacityAdvanceRequest &) = default ;
    BatchDeleteKvWithHighCapacityAdvanceRequest& operator=(BatchDeleteKvWithHighCapacityAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespace_ == nullptr
        && this->urlObject_ == nullptr; };
    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline BatchDeleteKvWithHighCapacityAdvanceRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // urlObject Field Functions 
    bool hasUrlObject() const { return this->urlObject_ != nullptr;};
    void deleteUrlObject() { this->urlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getUrlObject() const { DARABONBA_GET(urlObject_) };
    inline BatchDeleteKvWithHighCapacityAdvanceRequest& setUrlObject(shared_ptr<Darabonba::IStream> urlObject) { DARABONBA_SET_VALUE(urlObject_, urlObject) };


  protected:
    // The name of the namespace that you specify when you call the [CreateKvNamespace](https://help.aliyun.com/document_detail/2850317.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
    // The download URL of the key-value pairs that you want to delete. This parameter is automatically filled in when you use the SDK to call the operation.
    // 
    // This parameter is required.
    shared_ptr<Darabonba::IStream> urlObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
