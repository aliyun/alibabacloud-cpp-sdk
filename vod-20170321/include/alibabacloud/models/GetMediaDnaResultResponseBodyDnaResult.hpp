// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIADNARESULTRESPONSEBODYDNARESULT_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIADNARESULTRESPONSEBODYDNARESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMediaDNAResultResponseBodyDNAResultVideoDNA.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaDNAResultResponseBodyDNAResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaDNAResultResponseBodyDNAResult& obj) { 
      DARABONBA_PTR_TO_JSON(VideoDNA, videoDNA_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaDNAResultResponseBodyDNAResult& obj) { 
      DARABONBA_PTR_FROM_JSON(VideoDNA, videoDNA_);
    };
    GetMediaDNAResultResponseBodyDNAResult() = default ;
    GetMediaDNAResultResponseBodyDNAResult(const GetMediaDNAResultResponseBodyDNAResult &) = default ;
    GetMediaDNAResultResponseBodyDNAResult(GetMediaDNAResultResponseBodyDNAResult &&) = default ;
    GetMediaDNAResultResponseBodyDNAResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaDNAResultResponseBodyDNAResult() = default ;
    GetMediaDNAResultResponseBodyDNAResult& operator=(const GetMediaDNAResultResponseBodyDNAResult &) = default ;
    GetMediaDNAResultResponseBodyDNAResult& operator=(GetMediaDNAResultResponseBodyDNAResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->videoDNA_ == nullptr; };
    // videoDNA Field Functions 
    bool hasVideoDNA() const { return this->videoDNA_ != nullptr;};
    void deleteVideoDNA() { this->videoDNA_ = nullptr;};
    inline const vector<Models::GetMediaDNAResultResponseBodyDNAResultVideoDNA> & videoDNA() const { DARABONBA_PTR_GET_CONST(videoDNA_, vector<Models::GetMediaDNAResultResponseBodyDNAResultVideoDNA>) };
    inline vector<Models::GetMediaDNAResultResponseBodyDNAResultVideoDNA> videoDNA() { DARABONBA_PTR_GET(videoDNA_, vector<Models::GetMediaDNAResultResponseBodyDNAResultVideoDNA>) };
    inline GetMediaDNAResultResponseBodyDNAResult& setVideoDNA(const vector<Models::GetMediaDNAResultResponseBodyDNAResultVideoDNA> & videoDNA) { DARABONBA_PTR_SET_VALUE(videoDNA_, videoDNA) };
    inline GetMediaDNAResultResponseBodyDNAResult& setVideoDNA(vector<Models::GetMediaDNAResultResponseBodyDNAResultVideoDNA> && videoDNA) { DARABONBA_PTR_SET_RVALUE(videoDNA_, videoDNA) };


  protected:
    // The video fingerprint recognition result.
    std::shared_ptr<vector<Models::GetMediaDNAResultResponseBodyDNAResultVideoDNA>> videoDNA_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
