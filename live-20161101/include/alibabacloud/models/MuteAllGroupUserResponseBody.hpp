// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MUTEALLGROUPUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MUTEALLGROUPUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MuteAllGroupUserResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class MuteAllGroupUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MuteAllGroupUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, MuteAllGroupUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    MuteAllGroupUserResponseBody() = default ;
    MuteAllGroupUserResponseBody(const MuteAllGroupUserResponseBody &) = default ;
    MuteAllGroupUserResponseBody(MuteAllGroupUserResponseBody &&) = default ;
    MuteAllGroupUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MuteAllGroupUserResponseBody() = default ;
    MuteAllGroupUserResponseBody& operator=(const MuteAllGroupUserResponseBody &) = default ;
    MuteAllGroupUserResponseBody& operator=(MuteAllGroupUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->result_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MuteAllGroupUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const MuteAllGroupUserResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, MuteAllGroupUserResponseBodyResult) };
    inline MuteAllGroupUserResponseBodyResult result() { DARABONBA_PTR_GET(result_, MuteAllGroupUserResponseBodyResult) };
    inline MuteAllGroupUserResponseBody& setResult(const MuteAllGroupUserResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline MuteAllGroupUserResponseBody& setResult(MuteAllGroupUserResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The returned result.
    std::shared_ptr<MuteAllGroupUserResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
