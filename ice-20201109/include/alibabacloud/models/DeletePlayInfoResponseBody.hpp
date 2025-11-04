// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPLAYINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEPLAYINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeletePlayInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePlayInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ForbiddenList, forbiddenList_);
      DARABONBA_PTR_TO_JSON(IgnoredList, ignoredList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePlayInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ForbiddenList, forbiddenList_);
      DARABONBA_PTR_FROM_JSON(IgnoredList, ignoredList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeletePlayInfoResponseBody() = default ;
    DeletePlayInfoResponseBody(const DeletePlayInfoResponseBody &) = default ;
    DeletePlayInfoResponseBody(DeletePlayInfoResponseBody &&) = default ;
    DeletePlayInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePlayInfoResponseBody() = default ;
    DeletePlayInfoResponseBody& operator=(const DeletePlayInfoResponseBody &) = default ;
    DeletePlayInfoResponseBody& operator=(DeletePlayInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->forbiddenList_ == nullptr
        && return this->ignoredList_ == nullptr && return this->requestId_ == nullptr; };
    // forbiddenList Field Functions 
    bool hasForbiddenList() const { return this->forbiddenList_ != nullptr;};
    void deleteForbiddenList() { this->forbiddenList_ = nullptr;};
    inline const vector<string> & forbiddenList() const { DARABONBA_PTR_GET_CONST(forbiddenList_, vector<string>) };
    inline vector<string> forbiddenList() { DARABONBA_PTR_GET(forbiddenList_, vector<string>) };
    inline DeletePlayInfoResponseBody& setForbiddenList(const vector<string> & forbiddenList) { DARABONBA_PTR_SET_VALUE(forbiddenList_, forbiddenList) };
    inline DeletePlayInfoResponseBody& setForbiddenList(vector<string> && forbiddenList) { DARABONBA_PTR_SET_RVALUE(forbiddenList_, forbiddenList) };


    // ignoredList Field Functions 
    bool hasIgnoredList() const { return this->ignoredList_ != nullptr;};
    void deleteIgnoredList() { this->ignoredList_ = nullptr;};
    inline const vector<string> & ignoredList() const { DARABONBA_PTR_GET_CONST(ignoredList_, vector<string>) };
    inline vector<string> ignoredList() { DARABONBA_PTR_GET(ignoredList_, vector<string>) };
    inline DeletePlayInfoResponseBody& setIgnoredList(const vector<string> & ignoredList) { DARABONBA_PTR_SET_VALUE(ignoredList_, ignoredList) };
    inline DeletePlayInfoResponseBody& setIgnoredList(vector<string> && ignoredList) { DARABONBA_PTR_SET_RVALUE(ignoredList_, ignoredList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeletePlayInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The URLs of the media streams that cannot be deleted. Generally, media streams cannot be deleted if you do not have the required permissions.
    std::shared_ptr<vector<string>> forbiddenList_ = nullptr;
    // The URLs of ignored media streams. An error occurred while obtaining such media assets because the IDs or URLs of the media assets do not exist.
    std::shared_ptr<vector<string>> ignoredList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
