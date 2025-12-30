// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELFAVORITEPUBLICMEDIARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CANCELFAVORITEPUBLICMEDIARESPONSEBODY_HPP_
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
  class CancelFavoritePublicMediaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelFavoritePublicMediaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IgnoredList, ignoredList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelFavoritePublicMediaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IgnoredList, ignoredList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CancelFavoritePublicMediaResponseBody() = default ;
    CancelFavoritePublicMediaResponseBody(const CancelFavoritePublicMediaResponseBody &) = default ;
    CancelFavoritePublicMediaResponseBody(CancelFavoritePublicMediaResponseBody &&) = default ;
    CancelFavoritePublicMediaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelFavoritePublicMediaResponseBody() = default ;
    CancelFavoritePublicMediaResponseBody& operator=(const CancelFavoritePublicMediaResponseBody &) = default ;
    CancelFavoritePublicMediaResponseBody& operator=(CancelFavoritePublicMediaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ignoredList_ == nullptr
        && this->requestId_ == nullptr; };
    // ignoredList Field Functions 
    bool hasIgnoredList() const { return this->ignoredList_ != nullptr;};
    void deleteIgnoredList() { this->ignoredList_ = nullptr;};
    inline const vector<string> & getIgnoredList() const { DARABONBA_PTR_GET_CONST(ignoredList_, vector<string>) };
    inline vector<string> getIgnoredList() { DARABONBA_PTR_GET(ignoredList_, vector<string>) };
    inline CancelFavoritePublicMediaResponseBody& setIgnoredList(const vector<string> & ignoredList) { DARABONBA_PTR_SET_VALUE(ignoredList_, ignoredList) };
    inline CancelFavoritePublicMediaResponseBody& setIgnoredList(vector<string> && ignoredList) { DARABONBA_PTR_SET_RVALUE(ignoredList_, ignoredList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CancelFavoritePublicMediaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<string>> ignoredList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
