// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPORTRESPONSEBODYDATAS_HPP_
#define ALIBABACLOUD_MODELS_GETREPORTRESPONSEBODYDATAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetReportResponseBodyDatasData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class GetReportResponseBodyDatas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReportResponseBodyDatas& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GetReportResponseBodyDatas& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    GetReportResponseBodyDatas() = default ;
    GetReportResponseBodyDatas(const GetReportResponseBodyDatas &) = default ;
    GetReportResponseBodyDatas(GetReportResponseBodyDatas &&) = default ;
    GetReportResponseBodyDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReportResponseBodyDatas() = default ;
    GetReportResponseBodyDatas& operator=(const GetReportResponseBodyDatas &) = default ;
    GetReportResponseBodyDatas& operator=(GetReportResponseBodyDatas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->title_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::GetReportResponseBodyDatasData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::GetReportResponseBodyDatasData>) };
    inline vector<Models::GetReportResponseBodyDatasData> data() { DARABONBA_PTR_GET(data_, vector<Models::GetReportResponseBodyDatasData>) };
    inline GetReportResponseBodyDatas& setData(const vector<Models::GetReportResponseBodyDatasData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetReportResponseBodyDatas& setData(vector<Models::GetReportResponseBodyDatasData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetReportResponseBodyDatas& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // Data.
    std::shared_ptr<vector<Models::GetReportResponseBodyDatasData>> data_ = nullptr;
    // Data Title.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
