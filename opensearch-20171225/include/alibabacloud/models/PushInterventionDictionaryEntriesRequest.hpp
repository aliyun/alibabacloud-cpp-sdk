// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHINTERVENTIONDICTIONARYENTRIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHINTERVENTIONDICTIONARYENTRIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class PushInterventionDictionaryEntriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushInterventionDictionaryEntriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, PushInterventionDictionaryEntriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    PushInterventionDictionaryEntriesRequest() = default ;
    PushInterventionDictionaryEntriesRequest(const PushInterventionDictionaryEntriesRequest &) = default ;
    PushInterventionDictionaryEntriesRequest(PushInterventionDictionaryEntriesRequest &&) = default ;
    PushInterventionDictionaryEntriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushInterventionDictionaryEntriesRequest() = default ;
    PushInterventionDictionaryEntriesRequest& operator=(const PushInterventionDictionaryEntriesRequest &) = default ;
    PushInterventionDictionaryEntriesRequest& operator=(PushInterventionDictionaryEntriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && this->dryRun_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<Darabonba::Json> & getBody() const { DARABONBA_PTR_GET_CONST(body_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getBody() { DARABONBA_PTR_GET(body_, vector<Darabonba::Json>) };
    inline PushInterventionDictionaryEntriesRequest& setBody(const vector<Darabonba::Json> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline PushInterventionDictionaryEntriesRequest& setBody(vector<Darabonba::Json> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline PushInterventionDictionaryEntriesRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The request body.
    shared_ptr<vector<Darabonba::Json>> body_ {};
    // Specifies whether to validate the request parameters without creating the attribution configuration. The default value is false.
    // 
    // Valid values:
    // 
    // - **true**: Validates the request parameters only.
    // 
    // - **false**: Validates the request parameters and creates the attribution configuration.
    shared_ptr<bool> dryRun_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
