// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMINUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMINUTESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMinutesResponseBodyAudioList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryMinutesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMinutesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(audioList, audioList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMinutesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(audioList, audioList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    QueryMinutesResponseBody() = default ;
    QueryMinutesResponseBody(const QueryMinutesResponseBody &) = default ;
    QueryMinutesResponseBody(QueryMinutesResponseBody &&) = default ;
    QueryMinutesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMinutesResponseBody() = default ;
    QueryMinutesResponseBody& operator=(const QueryMinutesResponseBody &) = default ;
    QueryMinutesResponseBody& operator=(QueryMinutesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioList_ != nullptr
        && this->requestId_ != nullptr && this->vendorRequestId_ != nullptr && this->vendorType_ != nullptr; };
    // audioList Field Functions 
    bool hasAudioList() const { return this->audioList_ != nullptr;};
    void deleteAudioList() { this->audioList_ = nullptr;};
    inline const vector<QueryMinutesResponseBodyAudioList> & audioList() const { DARABONBA_PTR_GET_CONST(audioList_, vector<QueryMinutesResponseBodyAudioList>) };
    inline vector<QueryMinutesResponseBodyAudioList> audioList() { DARABONBA_PTR_GET(audioList_, vector<QueryMinutesResponseBodyAudioList>) };
    inline QueryMinutesResponseBody& setAudioList(const vector<QueryMinutesResponseBodyAudioList> & audioList) { DARABONBA_PTR_SET_VALUE(audioList_, audioList) };
    inline QueryMinutesResponseBody& setAudioList(vector<QueryMinutesResponseBodyAudioList> && audioList) { DARABONBA_PTR_SET_RVALUE(audioList_, audioList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMinutesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline QueryMinutesResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline QueryMinutesResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<vector<QueryMinutesResponseBodyAudioList>> audioList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
