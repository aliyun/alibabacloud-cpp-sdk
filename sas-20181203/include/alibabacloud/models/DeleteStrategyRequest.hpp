// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DeleteStrategyRequest() = default ;
    DeleteStrategyRequest(const DeleteStrategyRequest &) = default ;
    DeleteStrategyRequest(DeleteStrategyRequest &&) = default ;
    DeleteStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteStrategyRequest() = default ;
    DeleteStrategyRequest& operator=(const DeleteStrategyRequest &) = default ;
    DeleteStrategyRequest& operator=(DeleteStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->lang_ == nullptr && return this->sourceIp_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DeleteStrategyRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteStrategyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DeleteStrategyRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The ID of the baseline check policy that you want to delete.
    // 
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
