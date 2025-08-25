// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUPLOADAUDIODATAPARAMSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETUPLOADAUDIODATAPARAMSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetUploadAudioDataParamsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUploadAudioDataParamsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ParamsStr, paramsStr_);
    };
    friend void from_json(const Darabonba::Json& j, GetUploadAudioDataParamsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ParamsStr, paramsStr_);
    };
    GetUploadAudioDataParamsResponseBodyData() = default ;
    GetUploadAudioDataParamsResponseBodyData(const GetUploadAudioDataParamsResponseBodyData &) = default ;
    GetUploadAudioDataParamsResponseBodyData(GetUploadAudioDataParamsResponseBodyData &&) = default ;
    GetUploadAudioDataParamsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUploadAudioDataParamsResponseBodyData() = default ;
    GetUploadAudioDataParamsResponseBodyData& operator=(const GetUploadAudioDataParamsResponseBodyData &) = default ;
    GetUploadAudioDataParamsResponseBodyData& operator=(GetUploadAudioDataParamsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->paramsStr_ != nullptr; };
    // paramsStr Field Functions 
    bool hasParamsStr() const { return this->paramsStr_ != nullptr;};
    void deleteParamsStr() { this->paramsStr_ = nullptr;};
    inline string paramsStr() const { DARABONBA_PTR_GET_DEFAULT(paramsStr_, "") };
    inline GetUploadAudioDataParamsResponseBodyData& setParamsStr(string paramsStr) { DARABONBA_PTR_SET_VALUE(paramsStr_, paramsStr) };


  protected:
    std::shared_ptr<string> paramsStr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
