// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEODNARESULTRESPONSEBODYAIVIDEODNARESULTFPSHOTS_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEODNARESULTRESPONSEBODYAIVIDEODNARESULTFPSHOTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetVideoDNAResultResponseBodyAIVideoDNAResultFpShots : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoDNAResultResponseBodyAIVideoDNAResultFpShots& obj) { 
      DARABONBA_PTR_TO_JSON(FpShotSlices, fpShotSlices_);
      DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
      DARABONBA_PTR_TO_JSON(Similarity, similarity_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoDNAResultResponseBodyAIVideoDNAResultFpShots& obj) { 
      DARABONBA_PTR_FROM_JSON(FpShotSlices, fpShotSlices_);
      DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
      DARABONBA_PTR_FROM_JSON(Similarity, similarity_);
    };
    GetVideoDNAResultResponseBodyAIVideoDNAResultFpShots() = default ;
    GetVideoDNAResultResponseBodyAIVideoDNAResultFpShots(const GetVideoDNAResultResponseBodyAIVideoDNAResultFpShots &) = default ;
    GetVideoDNAResultResponseBodyAIVideoDNAResultFpShots(GetVideoDNAResultResponseBodyAIVideoDNAResultFpShots &&) = default ;
    GetVideoDNAResultResponseBodyAIVideoDNAResultFpShots(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoDNAResultResponseBodyAIVideoDNAResultFpShots() = default ;
    GetVideoDNAResultResponseBodyAIVideoDNAResultFpShots& operator=(const GetVideoDNAResultResponseBodyAIVideoDNAResultFpShots &) = default ;
    GetVideoDNAResultResponseBodyAIVideoDNAResultFpShots& operator=(GetVideoDNAResultResponseBodyAIVideoDNAResultFpShots &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fpShotSlices_ != nullptr
        && this->primaryKey_ != nullptr && this->similarity_ != nullptr; };
    // fpShotSlices Field Functions 
    bool hasFpShotSlices() const { return this->fpShotSlices_ != nullptr;};
    void deleteFpShotSlices() { this->fpShotSlices_ = nullptr;};
    inline const vector<Models::GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlices> & fpShotSlices() const { DARABONBA_PTR_GET_CONST(fpShotSlices_, vector<Models::GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlices>) };
    inline vector<Models::GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlices> fpShotSlices() { DARABONBA_PTR_GET(fpShotSlices_, vector<Models::GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlices>) };
    inline GetVideoDNAResultResponseBodyAIVideoDNAResultFpShots& setFpShotSlices(const vector<Models::GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlices> & fpShotSlices) { DARABONBA_PTR_SET_VALUE(fpShotSlices_, fpShotSlices) };
    inline GetVideoDNAResultResponseBodyAIVideoDNAResultFpShots& setFpShotSlices(vector<Models::GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlices> && fpShotSlices) { DARABONBA_PTR_SET_RVALUE(fpShotSlices_, fpShotSlices) };


    // primaryKey Field Functions 
    bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
    void deletePrimaryKey() { this->primaryKey_ = nullptr;};
    inline string primaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, "") };
    inline GetVideoDNAResultResponseBodyAIVideoDNAResultFpShots& setPrimaryKey(string primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


    // similarity Field Functions 
    bool hasSimilarity() const { return this->similarity_ != nullptr;};
    void deleteSimilarity() { this->similarity_ = nullptr;};
    inline string similarity() const { DARABONBA_PTR_GET_DEFAULT(similarity_, "") };
    inline GetVideoDNAResultResponseBodyAIVideoDNAResultFpShots& setSimilarity(string similarity) { DARABONBA_PTR_SET_VALUE(similarity_, similarity) };


  protected:
    std::shared_ptr<vector<Models::GetVideoDNAResultResponseBodyAIVideoDNAResultFpShotsFpShotSlices>> fpShotSlices_ = nullptr;
    std::shared_ptr<string> primaryKey_ = nullptr;
    std::shared_ptr<string> similarity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
