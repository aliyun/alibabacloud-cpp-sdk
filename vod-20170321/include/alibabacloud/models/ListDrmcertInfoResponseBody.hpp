// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDRMCERTINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDRMCERTINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDRMCertInfoResponseBodyDRMCertInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListDRMCertInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDRMCertInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DRMCertInfoList, DRMCertInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDRMCertInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DRMCertInfoList, DRMCertInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDRMCertInfoResponseBody() = default ;
    ListDRMCertInfoResponseBody(const ListDRMCertInfoResponseBody &) = default ;
    ListDRMCertInfoResponseBody(ListDRMCertInfoResponseBody &&) = default ;
    ListDRMCertInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDRMCertInfoResponseBody() = default ;
    ListDRMCertInfoResponseBody& operator=(const ListDRMCertInfoResponseBody &) = default ;
    ListDRMCertInfoResponseBody& operator=(ListDRMCertInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DRMCertInfoList_ != nullptr
        && this->requestId_ != nullptr; };
    // DRMCertInfoList Field Functions 
    bool hasDRMCertInfoList() const { return this->DRMCertInfoList_ != nullptr;};
    void deleteDRMCertInfoList() { this->DRMCertInfoList_ = nullptr;};
    inline const vector<ListDRMCertInfoResponseBodyDRMCertInfoList> & DRMCertInfoList() const { DARABONBA_PTR_GET_CONST(DRMCertInfoList_, vector<ListDRMCertInfoResponseBodyDRMCertInfoList>) };
    inline vector<ListDRMCertInfoResponseBodyDRMCertInfoList> DRMCertInfoList() { DARABONBA_PTR_GET(DRMCertInfoList_, vector<ListDRMCertInfoResponseBodyDRMCertInfoList>) };
    inline ListDRMCertInfoResponseBody& setDRMCertInfoList(const vector<ListDRMCertInfoResponseBodyDRMCertInfoList> & DRMCertInfoList) { DARABONBA_PTR_SET_VALUE(DRMCertInfoList_, DRMCertInfoList) };
    inline ListDRMCertInfoResponseBody& setDRMCertInfoList(vector<ListDRMCertInfoResponseBodyDRMCertInfoList> && DRMCertInfoList) { DARABONBA_PTR_SET_RVALUE(DRMCertInfoList_, DRMCertInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDRMCertInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListDRMCertInfoResponseBodyDRMCertInfoList>> DRMCertInfoList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
