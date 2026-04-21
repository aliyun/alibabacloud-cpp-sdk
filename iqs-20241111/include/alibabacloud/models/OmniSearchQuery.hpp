// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OMNISEARCHQUERY_HPP_
#define ALIBABACLOUD_MODELS_OMNISEARCHQUERY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class OmniSearchQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OmniSearchQuery& obj) { 
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(useCot, useCot_);
      DARABONBA_PTR_TO_JSON(useModel, useModel_);
    };
    friend void from_json(const Darabonba::Json& j, OmniSearchQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(useCot, useCot_);
      DARABONBA_PTR_FROM_JSON(useModel, useModel_);
    };
    OmniSearchQuery() = default ;
    OmniSearchQuery(const OmniSearchQuery &) = default ;
    OmniSearchQuery(OmniSearchQuery &&) = default ;
    OmniSearchQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OmniSearchQuery() = default ;
    OmniSearchQuery& operator=(const OmniSearchQuery &) = default ;
    OmniSearchQuery& operator=(OmniSearchQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->query_ == nullptr
        && this->sessionId_ == nullptr && this->useCot_ == nullptr && this->useModel_ == nullptr; };
    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline OmniSearchQuery& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline OmniSearchQuery& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // useCot Field Functions 
    bool hasUseCot() const { return this->useCot_ != nullptr;};
    void deleteUseCot() { this->useCot_ = nullptr;};
    inline bool getUseCot() const { DARABONBA_PTR_GET_DEFAULT(useCot_, false) };
    inline OmniSearchQuery& setUseCot(bool useCot) { DARABONBA_PTR_SET_VALUE(useCot_, useCot) };


    // useModel Field Functions 
    bool hasUseModel() const { return this->useModel_ != nullptr;};
    void deleteUseModel() { this->useModel_ = nullptr;};
    inline string getUseModel() const { DARABONBA_PTR_GET_DEFAULT(useModel_, "") };
    inline OmniSearchQuery& setUseModel(string useModel) { DARABONBA_PTR_SET_VALUE(useModel_, useModel) };


  protected:
    // This parameter is required.
    shared_ptr<string> query_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<bool> useCot_ {};
    shared_ptr<string> useModel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
