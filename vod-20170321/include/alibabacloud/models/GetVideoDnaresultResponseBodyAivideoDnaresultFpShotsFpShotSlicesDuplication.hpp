// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEODNARESULTRESPONSEBODYAIVIDEODNARESULTFPSHOTSFPSHOTSLICESDUPLICATION_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEODNARESULTRESPONSEBODYAIVIDEODNARESULTFPSHOTSFPSHOTSLICESDUPLICATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlicesDuplication : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlicesDuplication& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Start, start_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlicesDuplication& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
    };
    GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlicesDuplication() = default ;
    GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlicesDuplication(const GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlicesDuplication &) = default ;
    GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlicesDuplication(GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlicesDuplication &&) = default ;
    GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlicesDuplication(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlicesDuplication() = default ;
    GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlicesDuplication& operator=(const GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlicesDuplication &) = default ;
    GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlicesDuplication& operator=(GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlicesDuplication &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->duration_ != nullptr
        && this->start_ != nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlicesDuplication& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline string start() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
    inline GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlicesDuplication& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    std::shared_ptr<string> duration_ = nullptr;
    std::shared_ptr<string> start_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
