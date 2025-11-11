// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSMARTAUDITREQUESTIMAGEURLLIST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSMARTAUDITREQUESTIMAGEURLLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitSmartAuditRequestImageUrlList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSmartAuditRequestImageUrlList& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSmartAuditRequestImageUrlList& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    SubmitSmartAuditRequestImageUrlList() = default ;
    SubmitSmartAuditRequestImageUrlList(const SubmitSmartAuditRequestImageUrlList &) = default ;
    SubmitSmartAuditRequestImageUrlList(SubmitSmartAuditRequestImageUrlList &&) = default ;
    SubmitSmartAuditRequestImageUrlList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSmartAuditRequestImageUrlList() = default ;
    SubmitSmartAuditRequestImageUrlList& operator=(const SubmitSmartAuditRequestImageUrlList &) = default ;
    SubmitSmartAuditRequestImageUrlList& operator=(SubmitSmartAuditRequestImageUrlList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->url_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline SubmitSmartAuditRequestImageUrlList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline SubmitSmartAuditRequestImageUrlList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
