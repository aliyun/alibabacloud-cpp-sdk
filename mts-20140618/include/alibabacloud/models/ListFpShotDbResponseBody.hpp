// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFPSHOTDBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFPSHOTDBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListFpShotDBResponseBodyFpShotDBList.hpp>
#include <alibabacloud/models/ListFpShotDBResponseBodyNonExistIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListFpShotDBResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFpShotDBResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FpShotDBList, fpShotDBList_);
      DARABONBA_PTR_TO_JSON(NonExistIds, nonExistIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFpShotDBResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FpShotDBList, fpShotDBList_);
      DARABONBA_PTR_FROM_JSON(NonExistIds, nonExistIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFpShotDBResponseBody() = default ;
    ListFpShotDBResponseBody(const ListFpShotDBResponseBody &) = default ;
    ListFpShotDBResponseBody(ListFpShotDBResponseBody &&) = default ;
    ListFpShotDBResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFpShotDBResponseBody() = default ;
    ListFpShotDBResponseBody& operator=(const ListFpShotDBResponseBody &) = default ;
    ListFpShotDBResponseBody& operator=(ListFpShotDBResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fpShotDBList_ == nullptr
        && return this->nonExistIds_ == nullptr && return this->requestId_ == nullptr; };
    // fpShotDBList Field Functions 
    bool hasFpShotDBList() const { return this->fpShotDBList_ != nullptr;};
    void deleteFpShotDBList() { this->fpShotDBList_ = nullptr;};
    inline const ListFpShotDBResponseBodyFpShotDBList & fpShotDBList() const { DARABONBA_PTR_GET_CONST(fpShotDBList_, ListFpShotDBResponseBodyFpShotDBList) };
    inline ListFpShotDBResponseBodyFpShotDBList fpShotDBList() { DARABONBA_PTR_GET(fpShotDBList_, ListFpShotDBResponseBodyFpShotDBList) };
    inline ListFpShotDBResponseBody& setFpShotDBList(const ListFpShotDBResponseBodyFpShotDBList & fpShotDBList) { DARABONBA_PTR_SET_VALUE(fpShotDBList_, fpShotDBList) };
    inline ListFpShotDBResponseBody& setFpShotDBList(ListFpShotDBResponseBodyFpShotDBList && fpShotDBList) { DARABONBA_PTR_SET_RVALUE(fpShotDBList_, fpShotDBList) };


    // nonExistIds Field Functions 
    bool hasNonExistIds() const { return this->nonExistIds_ != nullptr;};
    void deleteNonExistIds() { this->nonExistIds_ = nullptr;};
    inline const ListFpShotDBResponseBodyNonExistIds & nonExistIds() const { DARABONBA_PTR_GET_CONST(nonExistIds_, ListFpShotDBResponseBodyNonExistIds) };
    inline ListFpShotDBResponseBodyNonExistIds nonExistIds() { DARABONBA_PTR_GET(nonExistIds_, ListFpShotDBResponseBodyNonExistIds) };
    inline ListFpShotDBResponseBody& setNonExistIds(const ListFpShotDBResponseBodyNonExistIds & nonExistIds) { DARABONBA_PTR_SET_VALUE(nonExistIds_, nonExistIds) };
    inline ListFpShotDBResponseBody& setNonExistIds(ListFpShotDBResponseBodyNonExistIds && nonExistIds) { DARABONBA_PTR_SET_RVALUE(nonExistIds_, nonExistIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFpShotDBResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The media fingerprint libraries.
    std::shared_ptr<ListFpShotDBResponseBodyFpShotDBList> fpShotDBList_ = nullptr;
    // The IDs of the media fingerprint libraries that do not exist.
    std::shared_ptr<ListFpShotDBResponseBodyNonExistIds> nonExistIds_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
