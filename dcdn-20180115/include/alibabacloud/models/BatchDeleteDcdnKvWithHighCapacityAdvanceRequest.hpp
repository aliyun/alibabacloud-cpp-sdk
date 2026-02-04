// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETEDCDNKVWITHHIGHCAPACITYADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETEDCDNKVWITHHIGHCAPACITYADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class BatchDeleteDcdnKvWithHighCapacityAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteDcdnKvWithHighCapacityAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      // urlObject_ is stream
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteDcdnKvWithHighCapacityAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      // urlObject_ is stream
    };
    BatchDeleteDcdnKvWithHighCapacityAdvanceRequest() = default ;
    BatchDeleteDcdnKvWithHighCapacityAdvanceRequest(const BatchDeleteDcdnKvWithHighCapacityAdvanceRequest &) = default ;
    BatchDeleteDcdnKvWithHighCapacityAdvanceRequest(BatchDeleteDcdnKvWithHighCapacityAdvanceRequest &&) = default ;
    BatchDeleteDcdnKvWithHighCapacityAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteDcdnKvWithHighCapacityAdvanceRequest() = default ;
    BatchDeleteDcdnKvWithHighCapacityAdvanceRequest& operator=(const BatchDeleteDcdnKvWithHighCapacityAdvanceRequest &) = default ;
    BatchDeleteDcdnKvWithHighCapacityAdvanceRequest& operator=(BatchDeleteDcdnKvWithHighCapacityAdvanceRequest &&) = default ;
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
    inline BatchDeleteDcdnKvWithHighCapacityAdvanceRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // urlObject Field Functions 
    bool hasUrlObject() const { return this->urlObject_ != nullptr;};
    void deleteUrlObject() { this->urlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getUrlObject() const { DARABONBA_GET(urlObject_) };
    inline BatchDeleteDcdnKvWithHighCapacityAdvanceRequest& setUrlObject(shared_ptr<Darabonba::IStream> urlObject) { DARABONBA_SET_VALUE(urlObject_, urlObject) };


  protected:
    // This parameter is required.
    shared_ptr<string> namespace_ {};
    // This parameter is required.
    shared_ptr<Darabonba::IStream> urlObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
