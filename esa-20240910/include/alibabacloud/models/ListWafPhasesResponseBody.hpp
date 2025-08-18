// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAFPHASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWAFPHASESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWafPhasesResponseBodyPhases.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWafPhasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWafPhasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Phases, phases_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWafPhasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Phases, phases_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListWafPhasesResponseBody() = default ;
    ListWafPhasesResponseBody(const ListWafPhasesResponseBody &) = default ;
    ListWafPhasesResponseBody(ListWafPhasesResponseBody &&) = default ;
    ListWafPhasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWafPhasesResponseBody() = default ;
    ListWafPhasesResponseBody& operator=(const ListWafPhasesResponseBody &) = default ;
    ListWafPhasesResponseBody& operator=(ListWafPhasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->phases_ != nullptr
        && this->requestId_ != nullptr; };
    // phases Field Functions 
    bool hasPhases() const { return this->phases_ != nullptr;};
    void deletePhases() { this->phases_ = nullptr;};
    inline const vector<ListWafPhasesResponseBodyPhases> & phases() const { DARABONBA_PTR_GET_CONST(phases_, vector<ListWafPhasesResponseBodyPhases>) };
    inline vector<ListWafPhasesResponseBodyPhases> phases() { DARABONBA_PTR_GET(phases_, vector<ListWafPhasesResponseBodyPhases>) };
    inline ListWafPhasesResponseBody& setPhases(const vector<ListWafPhasesResponseBodyPhases> & phases) { DARABONBA_PTR_SET_VALUE(phases_, phases) };
    inline ListWafPhasesResponseBody& setPhases(vector<ListWafPhasesResponseBodyPhases> && phases) { DARABONBA_PTR_SET_RVALUE(phases_, phases) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWafPhasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // List of WAF operation phases.
    std::shared_ptr<vector<ListWafPhasesResponseBodyPhases>> phases_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
