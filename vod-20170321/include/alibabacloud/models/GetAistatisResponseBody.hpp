// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAISTATISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAISTATISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAIStatisResponseBodyAIStatisList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAIStatisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIStatisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIStatisList, AIStatisList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIStatisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIStatisList, AIStatisList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAIStatisResponseBody() = default ;
    GetAIStatisResponseBody(const GetAIStatisResponseBody &) = default ;
    GetAIStatisResponseBody(GetAIStatisResponseBody &&) = default ;
    GetAIStatisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIStatisResponseBody() = default ;
    GetAIStatisResponseBody& operator=(const GetAIStatisResponseBody &) = default ;
    GetAIStatisResponseBody& operator=(GetAIStatisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIStatisList_ != nullptr
        && this->requestId_ != nullptr; };
    // AIStatisList Field Functions 
    bool hasAIStatisList() const { return this->AIStatisList_ != nullptr;};
    void deleteAIStatisList() { this->AIStatisList_ = nullptr;};
    inline const vector<GetAIStatisResponseBodyAIStatisList> & AIStatisList() const { DARABONBA_PTR_GET_CONST(AIStatisList_, vector<GetAIStatisResponseBodyAIStatisList>) };
    inline vector<GetAIStatisResponseBodyAIStatisList> AIStatisList() { DARABONBA_PTR_GET(AIStatisList_, vector<GetAIStatisResponseBodyAIStatisList>) };
    inline GetAIStatisResponseBody& setAIStatisList(const vector<GetAIStatisResponseBodyAIStatisList> & AIStatisList) { DARABONBA_PTR_SET_VALUE(AIStatisList_, AIStatisList) };
    inline GetAIStatisResponseBody& setAIStatisList(vector<GetAIStatisResponseBodyAIStatisList> && AIStatisList) { DARABONBA_PTR_SET_RVALUE(AIStatisList_, AIStatisList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAIStatisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<GetAIStatisResponseBodyAIStatisList>> AIStatisList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
