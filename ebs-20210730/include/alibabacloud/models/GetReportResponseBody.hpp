// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetReportResponseBodyDatas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class GetReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Datas, datas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Datas, datas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetReportResponseBody() = default ;
    GetReportResponseBody(const GetReportResponseBody &) = default ;
    GetReportResponseBody(GetReportResponseBody &&) = default ;
    GetReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReportResponseBody() = default ;
    GetReportResponseBody& operator=(const GetReportResponseBody &) = default ;
    GetReportResponseBody& operator=(GetReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datas_ == nullptr
        && return this->requestId_ == nullptr; };
    // datas Field Functions 
    bool hasDatas() const { return this->datas_ != nullptr;};
    void deleteDatas() { this->datas_ = nullptr;};
    inline const vector<GetReportResponseBodyDatas> & datas() const { DARABONBA_PTR_GET_CONST(datas_, vector<GetReportResponseBodyDatas>) };
    inline vector<GetReportResponseBodyDatas> datas() { DARABONBA_PTR_GET(datas_, vector<GetReportResponseBodyDatas>) };
    inline GetReportResponseBody& setDatas(const vector<GetReportResponseBodyDatas> & datas) { DARABONBA_PTR_SET_VALUE(datas_, datas) };
    inline GetReportResponseBody& setDatas(vector<GetReportResponseBodyDatas> && datas) { DARABONBA_PTR_SET_RVALUE(datas_, datas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Data Details.
    std::shared_ptr<vector<GetReportResponseBodyDatas>> datas_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
