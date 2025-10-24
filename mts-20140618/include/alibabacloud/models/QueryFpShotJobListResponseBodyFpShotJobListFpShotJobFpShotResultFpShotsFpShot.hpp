// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFPSHOTJOBLISTRESPONSEBODYFPSHOTJOBLISTFPSHOTJOBFPSHOTRESULTFPSHOTSFPSHOT_HPP_
#define ALIBABACLOUD_MODELS_QUERYFPSHOTJOBLISTRESPONSEBODYFPSHOTJOBLISTFPSHOTJOBFPSHOTRESULTFPSHOTSFPSHOT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShotFpShotSlices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShot& obj) { 
      DARABONBA_PTR_TO_JSON(FpShotSlices, fpShotSlices_);
      DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
      DARABONBA_PTR_TO_JSON(Similarity, similarity_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShot& obj) { 
      DARABONBA_PTR_FROM_JSON(FpShotSlices, fpShotSlices_);
      DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
      DARABONBA_PTR_FROM_JSON(Similarity, similarity_);
    };
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShot() = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShot(const QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShot &) = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShot(QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShot &&) = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShot(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShot() = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShot& operator=(const QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShot &) = default ;
    QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShot& operator=(QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShot &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fpShotSlices_ == nullptr
        && return this->primaryKey_ == nullptr && return this->similarity_ == nullptr; };
    // fpShotSlices Field Functions 
    bool hasFpShotSlices() const { return this->fpShotSlices_ != nullptr;};
    void deleteFpShotSlices() { this->fpShotSlices_ = nullptr;};
    inline const Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShotFpShotSlices & fpShotSlices() const { DARABONBA_PTR_GET_CONST(fpShotSlices_, Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShotFpShotSlices) };
    inline Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShotFpShotSlices fpShotSlices() { DARABONBA_PTR_GET(fpShotSlices_, Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShotFpShotSlices) };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShot& setFpShotSlices(const Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShotFpShotSlices & fpShotSlices) { DARABONBA_PTR_SET_VALUE(fpShotSlices_, fpShotSlices) };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShot& setFpShotSlices(Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShotFpShotSlices && fpShotSlices) { DARABONBA_PTR_SET_RVALUE(fpShotSlices_, fpShotSlices) };


    // primaryKey Field Functions 
    bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
    void deletePrimaryKey() { this->primaryKey_ = nullptr;};
    inline string primaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, "") };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShot& setPrimaryKey(string primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


    // similarity Field Functions 
    bool hasSimilarity() const { return this->similarity_ != nullptr;};
    void deleteSimilarity() { this->similarity_ = nullptr;};
    inline string similarity() const { DARABONBA_PTR_GET_DEFAULT(similarity_, "") };
    inline QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShot& setSimilarity(string similarity) { DARABONBA_PTR_SET_VALUE(similarity_, similarity) };


  protected:
    // The video files that have similar fingerprints to the input video in the video fingerprint library.
    std::shared_ptr<Models::QueryFpShotJobListResponseBodyFpShotJobListFpShotJobFpShotResultFpShotsFpShotFpShotSlices> fpShotSlices_ = nullptr;
    // The unique primary key of the input video.
    std::shared_ptr<string> primaryKey_ = nullptr;
    // The overall similarity of the input video against video files that have similar fingerprints to the input video in the video fingerprint library.
    // 
    // >  The overall similarity is the average value of the similarities of the input video clips with the clips of the video that has a similar fingerprint. If multiple video files that have similar fingerprints to the input video exist in the video fingerprint library, the similarities of the input video against multiple similar video clips are returned.
    std::shared_ptr<string> similarity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
