// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCREENDATAMAPRESPONSEBODYSASSCREENTYPELISTTYPEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCREENDATAMAPRESPONSEBODYSASSCREENTYPELISTTYPEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeScreenDataMapResponseBodySasScreenTypeListTypeDataDate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20210114
{
namespace Models
{
  class DescribeScreenDataMapResponseBodySasScreenTypeListTypeData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScreenDataMapResponseBodySasScreenTypeListTypeData& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScreenDataMapResponseBodySasScreenTypeListTypeData& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    DescribeScreenDataMapResponseBodySasScreenTypeListTypeData() = default ;
    DescribeScreenDataMapResponseBodySasScreenTypeListTypeData(const DescribeScreenDataMapResponseBodySasScreenTypeListTypeData &) = default ;
    DescribeScreenDataMapResponseBodySasScreenTypeListTypeData(DescribeScreenDataMapResponseBodySasScreenTypeListTypeData &&) = default ;
    DescribeScreenDataMapResponseBodySasScreenTypeListTypeData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScreenDataMapResponseBodySasScreenTypeListTypeData() = default ;
    DescribeScreenDataMapResponseBodySasScreenTypeListTypeData& operator=(const DescribeScreenDataMapResponseBodySasScreenTypeListTypeData &) = default ;
    DescribeScreenDataMapResponseBodySasScreenTypeListTypeData& operator=(DescribeScreenDataMapResponseBodySasScreenTypeListTypeData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->date_ == nullptr && return this->id_ == nullptr && return this->title_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeScreenDataMapResponseBodySasScreenTypeListTypeData& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline const vector<Models::DescribeScreenDataMapResponseBodySasScreenTypeListTypeDataDate> & date() const { DARABONBA_PTR_GET_CONST(date_, vector<Models::DescribeScreenDataMapResponseBodySasScreenTypeListTypeDataDate>) };
    inline vector<Models::DescribeScreenDataMapResponseBodySasScreenTypeListTypeDataDate> date() { DARABONBA_PTR_GET(date_, vector<Models::DescribeScreenDataMapResponseBodySasScreenTypeListTypeDataDate>) };
    inline DescribeScreenDataMapResponseBodySasScreenTypeListTypeData& setDate(const vector<Models::DescribeScreenDataMapResponseBodySasScreenTypeListTypeDataDate> & date) { DARABONBA_PTR_SET_VALUE(date_, date) };
    inline DescribeScreenDataMapResponseBodySasScreenTypeListTypeData& setDate(vector<Models::DescribeScreenDataMapResponseBodySasScreenTypeListTypeDataDate> && date) { DARABONBA_PTR_SET_RVALUE(date_, date) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeScreenDataMapResponseBodySasScreenTypeListTypeData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeScreenDataMapResponseBodySasScreenTypeListTypeData& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<vector<Models::DescribeScreenDataMapResponseBodySasScreenTypeListTypeDataDate>> date_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20210114
#endif
