// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONFERENCEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONFERENCEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryConferenceInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConferenceInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(conferenceId, conferenceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConferenceInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(conferenceId, conferenceId_);
    };
    QueryConferenceInfoRequest() = default ;
    QueryConferenceInfoRequest(const QueryConferenceInfoRequest &) = default ;
    QueryConferenceInfoRequest(QueryConferenceInfoRequest &&) = default ;
    QueryConferenceInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConferenceInfoRequest() = default ;
    QueryConferenceInfoRequest& operator=(const QueryConferenceInfoRequest &) = default ;
    QueryConferenceInfoRequest& operator=(QueryConferenceInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conferenceId_ == nullptr; };
    // conferenceId Field Functions 
    bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
    void deleteConferenceId() { this->conferenceId_ = nullptr;};
    inline string getConferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
    inline QueryConferenceInfoRequest& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> conferenceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
