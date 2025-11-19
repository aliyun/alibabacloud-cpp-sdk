// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIADNARESULTRESPONSEBODYDNARESULTVIDEODNA_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIADNARESULTRESPONSEBODYDNARESULTVIDEODNA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMediaDNAResultResponseBodyDNAResultVideoDNADetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaDNAResultResponseBodyDNAResultVideoDNA : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaDNAResultResponseBodyDNAResultVideoDNA& obj) { 
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
      DARABONBA_PTR_TO_JSON(Similarity, similarity_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaDNAResultResponseBodyDNAResultVideoDNA& obj) { 
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
      DARABONBA_PTR_FROM_JSON(Similarity, similarity_);
    };
    GetMediaDNAResultResponseBodyDNAResultVideoDNA() = default ;
    GetMediaDNAResultResponseBodyDNAResultVideoDNA(const GetMediaDNAResultResponseBodyDNAResultVideoDNA &) = default ;
    GetMediaDNAResultResponseBodyDNAResultVideoDNA(GetMediaDNAResultResponseBodyDNAResultVideoDNA &&) = default ;
    GetMediaDNAResultResponseBodyDNAResultVideoDNA(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaDNAResultResponseBodyDNAResultVideoDNA() = default ;
    GetMediaDNAResultResponseBodyDNAResultVideoDNA& operator=(const GetMediaDNAResultResponseBodyDNAResultVideoDNA &) = default ;
    GetMediaDNAResultResponseBodyDNAResultVideoDNA& operator=(GetMediaDNAResultResponseBodyDNAResultVideoDNA &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detail_ == nullptr
        && return this->primaryKey_ == nullptr && return this->similarity_ == nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline const vector<Models::GetMediaDNAResultResponseBodyDNAResultVideoDNADetail> & detail() const { DARABONBA_PTR_GET_CONST(detail_, vector<Models::GetMediaDNAResultResponseBodyDNAResultVideoDNADetail>) };
    inline vector<Models::GetMediaDNAResultResponseBodyDNAResultVideoDNADetail> detail() { DARABONBA_PTR_GET(detail_, vector<Models::GetMediaDNAResultResponseBodyDNAResultVideoDNADetail>) };
    inline GetMediaDNAResultResponseBodyDNAResultVideoDNA& setDetail(const vector<Models::GetMediaDNAResultResponseBodyDNAResultVideoDNADetail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
    inline GetMediaDNAResultResponseBodyDNAResultVideoDNA& setDetail(vector<Models::GetMediaDNAResultResponseBodyDNAResultVideoDNADetail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


    // primaryKey Field Functions 
    bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
    void deletePrimaryKey() { this->primaryKey_ = nullptr;};
    inline string primaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, "") };
    inline GetMediaDNAResultResponseBodyDNAResultVideoDNA& setPrimaryKey(string primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


    // similarity Field Functions 
    bool hasSimilarity() const { return this->similarity_ != nullptr;};
    void deleteSimilarity() { this->similarity_ = nullptr;};
    inline string similarity() const { DARABONBA_PTR_GET_DEFAULT(similarity_, "") };
    inline GetMediaDNAResultResponseBodyDNAResultVideoDNA& setSimilarity(string similarity) { DARABONBA_PTR_SET_VALUE(similarity_, similarity) };


  protected:
    // The details of the matched video. Information such as the location and duration of the video is returned.
    std::shared_ptr<vector<Models::GetMediaDNAResultResponseBodyDNAResultVideoDNADetail>> detail_ = nullptr;
    // The ID of the video that has a similar fingerprint.
    std::shared_ptr<string> primaryKey_ = nullptr;
    // The similarity between the fingerprints of the input video and the matched video. 1 indicates that the fingerprints of the two videos are the same.
    std::shared_ptr<string> similarity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
