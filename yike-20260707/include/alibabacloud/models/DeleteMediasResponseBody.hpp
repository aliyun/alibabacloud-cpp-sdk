// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMEDIASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEMEDIASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class DeleteMediasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMediasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ForbiddenList, forbiddenList_);
      DARABONBA_PTR_TO_JSON(IgnoredList, ignoredList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMediasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ForbiddenList, forbiddenList_);
      DARABONBA_PTR_FROM_JSON(IgnoredList, ignoredList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteMediasResponseBody() = default ;
    DeleteMediasResponseBody(const DeleteMediasResponseBody &) = default ;
    DeleteMediasResponseBody(DeleteMediasResponseBody &&) = default ;
    DeleteMediasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMediasResponseBody() = default ;
    DeleteMediasResponseBody& operator=(const DeleteMediasResponseBody &) = default ;
    DeleteMediasResponseBody& operator=(DeleteMediasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->forbiddenList_ == nullptr
        && this->ignoredList_ == nullptr && this->requestId_ == nullptr; };
    // forbiddenList Field Functions 
    bool hasForbiddenList() const { return this->forbiddenList_ != nullptr;};
    void deleteForbiddenList() { this->forbiddenList_ = nullptr;};
    inline const vector<string> & getForbiddenList() const { DARABONBA_PTR_GET_CONST(forbiddenList_, vector<string>) };
    inline vector<string> getForbiddenList() { DARABONBA_PTR_GET(forbiddenList_, vector<string>) };
    inline DeleteMediasResponseBody& setForbiddenList(const vector<string> & forbiddenList) { DARABONBA_PTR_SET_VALUE(forbiddenList_, forbiddenList) };
    inline DeleteMediasResponseBody& setForbiddenList(vector<string> && forbiddenList) { DARABONBA_PTR_SET_RVALUE(forbiddenList_, forbiddenList) };


    // ignoredList Field Functions 
    bool hasIgnoredList() const { return this->ignoredList_ != nullptr;};
    void deleteIgnoredList() { this->ignoredList_ = nullptr;};
    inline const vector<string> & getIgnoredList() const { DARABONBA_PTR_GET_CONST(ignoredList_, vector<string>) };
    inline vector<string> getIgnoredList() { DARABONBA_PTR_GET(ignoredList_, vector<string>) };
    inline DeleteMediasResponseBody& setIgnoredList(const vector<string> & ignoredList) { DARABONBA_PTR_SET_VALUE(ignoredList_, ignoredList) };
    inline DeleteMediasResponseBody& setIgnoredList(vector<string> && ignoredList) { DARABONBA_PTR_SET_RVALUE(ignoredList_, ignoredList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteMediasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<string>> forbiddenList_ {};
    shared_ptr<vector<string>> ignoredList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
