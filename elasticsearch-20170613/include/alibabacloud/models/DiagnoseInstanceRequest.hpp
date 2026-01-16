// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DIAGNOSEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DIAGNOSEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DiagnoseInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DiagnoseInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(diagnoseItems, diagnoseItems_);
      DARABONBA_PTR_TO_JSON(indices, indices_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DiagnoseInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(diagnoseItems, diagnoseItems_);
      DARABONBA_PTR_FROM_JSON(indices, indices_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(lang, lang_);
    };
    DiagnoseInstanceRequest() = default ;
    DiagnoseInstanceRequest(const DiagnoseInstanceRequest &) = default ;
    DiagnoseInstanceRequest(DiagnoseInstanceRequest &&) = default ;
    DiagnoseInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DiagnoseInstanceRequest() = default ;
    DiagnoseInstanceRequest& operator=(const DiagnoseInstanceRequest &) = default ;
    DiagnoseInstanceRequest& operator=(DiagnoseInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->diagnoseItems_ == nullptr && this->indices_ == nullptr && this->type_ == nullptr && this->lang_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DiagnoseInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // diagnoseItems Field Functions 
    bool hasDiagnoseItems() const { return this->diagnoseItems_ != nullptr;};
    void deleteDiagnoseItems() { this->diagnoseItems_ = nullptr;};
    inline const vector<string> & getDiagnoseItems() const { DARABONBA_PTR_GET_CONST(diagnoseItems_, vector<string>) };
    inline vector<string> getDiagnoseItems() { DARABONBA_PTR_GET(diagnoseItems_, vector<string>) };
    inline DiagnoseInstanceRequest& setDiagnoseItems(const vector<string> & diagnoseItems) { DARABONBA_PTR_SET_VALUE(diagnoseItems_, diagnoseItems) };
    inline DiagnoseInstanceRequest& setDiagnoseItems(vector<string> && diagnoseItems) { DARABONBA_PTR_SET_RVALUE(diagnoseItems_, diagnoseItems) };


    // indices Field Functions 
    bool hasIndices() const { return this->indices_ != nullptr;};
    void deleteIndices() { this->indices_ = nullptr;};
    inline const vector<string> & getIndices() const { DARABONBA_PTR_GET_CONST(indices_, vector<string>) };
    inline vector<string> getIndices() { DARABONBA_PTR_GET(indices_, vector<string>) };
    inline DiagnoseInstanceRequest& setIndices(const vector<string> & indices) { DARABONBA_PTR_SET_VALUE(indices_, indices) };
    inline DiagnoseInstanceRequest& setIndices(vector<string> && indices) { DARABONBA_PTR_SET_RVALUE(indices_, indices) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DiagnoseInstanceRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DiagnoseInstanceRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The timestamp when the diagnostic report was generated.
    shared_ptr<string> clientToken_ {};
    shared_ptr<vector<string>> diagnoseItems_ {};
    shared_ptr<vector<string>> indices_ {};
    shared_ptr<string> type_ {};
    // The returned data.
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
