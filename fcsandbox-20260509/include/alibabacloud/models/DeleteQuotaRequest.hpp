// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class DeleteQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(tagValue, tagValue_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(tagValue, tagValue_);
    };
    DeleteQuotaRequest() = default ;
    DeleteQuotaRequest(const DeleteQuotaRequest &) = default ;
    DeleteQuotaRequest(DeleteQuotaRequest &&) = default ;
    DeleteQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteQuotaRequest() = default ;
    DeleteQuotaRequest& operator=(const DeleteQuotaRequest &) = default ;
    DeleteQuotaRequest& operator=(DeleteQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagValue_ == nullptr; };
    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline DeleteQuotaRequest& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


  protected:
    shared_ptr<string> tagValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
