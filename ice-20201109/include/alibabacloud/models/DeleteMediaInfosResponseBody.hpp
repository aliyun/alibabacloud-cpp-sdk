// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMEDIAINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEMEDIAINFOSRESPONSEBODY_HPP_
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
  class DeleteMediaInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMediaInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ForbiddenList, forbiddenList_);
      DARABONBA_PTR_TO_JSON(IgnoredList, ignoredList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMediaInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ForbiddenList, forbiddenList_);
      DARABONBA_PTR_FROM_JSON(IgnoredList, ignoredList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteMediaInfosResponseBody() = default ;
    DeleteMediaInfosResponseBody(const DeleteMediaInfosResponseBody &) = default ;
    DeleteMediaInfosResponseBody(DeleteMediaInfosResponseBody &&) = default ;
    DeleteMediaInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMediaInfosResponseBody() = default ;
    DeleteMediaInfosResponseBody& operator=(const DeleteMediaInfosResponseBody &) = default ;
    DeleteMediaInfosResponseBody& operator=(DeleteMediaInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->forbiddenList_ != nullptr
        && this->ignoredList_ != nullptr && this->requestId_ != nullptr; };
    // forbiddenList Field Functions 
    bool hasForbiddenList() const { return this->forbiddenList_ != nullptr;};
    void deleteForbiddenList() { this->forbiddenList_ = nullptr;};
    inline const vector<string> & forbiddenList() const { DARABONBA_PTR_GET_CONST(forbiddenList_, vector<string>) };
    inline vector<string> forbiddenList() { DARABONBA_PTR_GET(forbiddenList_, vector<string>) };
    inline DeleteMediaInfosResponseBody& setForbiddenList(const vector<string> & forbiddenList) { DARABONBA_PTR_SET_VALUE(forbiddenList_, forbiddenList) };
    inline DeleteMediaInfosResponseBody& setForbiddenList(vector<string> && forbiddenList) { DARABONBA_PTR_SET_RVALUE(forbiddenList_, forbiddenList) };


    // ignoredList Field Functions 
    bool hasIgnoredList() const { return this->ignoredList_ != nullptr;};
    void deleteIgnoredList() { this->ignoredList_ = nullptr;};
    inline const vector<string> & ignoredList() const { DARABONBA_PTR_GET_CONST(ignoredList_, vector<string>) };
    inline vector<string> ignoredList() { DARABONBA_PTR_GET(ignoredList_, vector<string>) };
    inline DeleteMediaInfosResponseBody& setIgnoredList(const vector<string> & ignoredList) { DARABONBA_PTR_SET_VALUE(ignoredList_, ignoredList) };
    inline DeleteMediaInfosResponseBody& setIgnoredList(vector<string> && ignoredList) { DARABONBA_PTR_SET_RVALUE(ignoredList_, ignoredList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteMediaInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs or URLs of media assets that cannot be deleted. Generally, media assets cannot be deleted if you do not have the required permissions.
    std::shared_ptr<vector<string>> forbiddenList_ = nullptr;
    // The IDs or URLs of ignored media assets. An error occurred while obtaining such media assets.
    std::shared_ptr<vector<string>> ignoredList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
