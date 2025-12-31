// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADPCACERTTOCASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADPCACERTTOCASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class UploadPcaCertToCasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadPcaCertToCasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, ids_);
    };
    friend void from_json(const Darabonba::Json& j, UploadPcaCertToCasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
    };
    UploadPcaCertToCasRequest() = default ;
    UploadPcaCertToCasRequest(const UploadPcaCertToCasRequest &) = default ;
    UploadPcaCertToCasRequest(UploadPcaCertToCasRequest &&) = default ;
    UploadPcaCertToCasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadPcaCertToCasRequest() = default ;
    UploadPcaCertToCasRequest& operator=(const UploadPcaCertToCasRequest &) = default ;
    UploadPcaCertToCasRequest& operator=(UploadPcaCertToCasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ids_ == nullptr; };
    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline string getIds() const { DARABONBA_PTR_GET_DEFAULT(ids_, "") };
    inline UploadPcaCertToCasRequest& setIds(string ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };


  protected:
    // This parameter is required.
    shared_ptr<string> ids_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
