// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READMESSAGECONTENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_READMESSAGECONTENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ReadMessageContentResponseBodyDataDatas.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Notifications20241225
{
namespace Models
{
  class ReadMessageContentResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadMessageContentResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Datas, datas_);
    };
    friend void from_json(const Darabonba::Json& j, ReadMessageContentResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Datas, datas_);
    };
    ReadMessageContentResponseBodyData() = default ;
    ReadMessageContentResponseBodyData(const ReadMessageContentResponseBodyData &) = default ;
    ReadMessageContentResponseBodyData(ReadMessageContentResponseBodyData &&) = default ;
    ReadMessageContentResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadMessageContentResponseBodyData() = default ;
    ReadMessageContentResponseBodyData& operator=(const ReadMessageContentResponseBodyData &) = default ;
    ReadMessageContentResponseBodyData& operator=(ReadMessageContentResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->datas_ != nullptr; };
    // datas Field Functions 
    bool hasDatas() const { return this->datas_ != nullptr;};
    void deleteDatas() { this->datas_ = nullptr;};
    inline const Models::ReadMessageContentResponseBodyDataDatas & datas() const { DARABONBA_PTR_GET_CONST(datas_, Models::ReadMessageContentResponseBodyDataDatas) };
    inline Models::ReadMessageContentResponseBodyDataDatas datas() { DARABONBA_PTR_GET(datas_, Models::ReadMessageContentResponseBodyDataDatas) };
    inline ReadMessageContentResponseBodyData& setDatas(const Models::ReadMessageContentResponseBodyDataDatas & datas) { DARABONBA_PTR_SET_VALUE(datas_, datas) };
    inline ReadMessageContentResponseBodyData& setDatas(Models::ReadMessageContentResponseBodyDataDatas && datas) { DARABONBA_PTR_SET_RVALUE(datas_, datas) };


  protected:
    std::shared_ptr<Models::ReadMessageContentResponseBodyDataDatas> datas_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Notifications20241225
#endif
