// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAINFORESPONSEBODYMEDIAINFOAIROUGHDATASTANDARDSMARTTAGJOBRESULTS_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAINFORESPONSEBODYMEDIAINFOAIROUGHDATASTANDARDSMARTTAGJOBRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJobResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJobResults& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJobResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJobResults() = default ;
    GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJobResults(const GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJobResults &) = default ;
    GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJobResults(GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJobResults &&) = default ;
    GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJobResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJobResults() = default ;
    GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJobResults& operator=(const GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJobResults &) = default ;
    GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJobResults& operator=(GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJobResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->type_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJobResults& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetMediaInfoResponseBodyMediaInfoAiRoughDataStandardSmartTagJobResults& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The result data. The value is a JSON string. For information about the data structures of different data types<props="china">, see [Description of the Results parameter](https://help.aliyun.com/zh/ims/developer-reference/api-ice-2020-11-09-querysmarttagjob?spm=a2c4g.11186623.0.0.521d48b7KfapOL#api-detail-40).
    std::shared_ptr<string> data_ = nullptr;
    // The tagging type. Valid values:
    // 
    // *   NLP: natural language processing (NLP)-based tagging
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
