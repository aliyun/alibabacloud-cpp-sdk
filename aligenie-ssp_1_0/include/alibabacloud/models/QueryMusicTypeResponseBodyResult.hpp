// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMUSICTYPERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYMUSICTYPERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class QueryMusicTypeResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMusicTypeResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(MusicType, musicType_);
      DARABONBA_PTR_TO_JSON(MusicTypeName, musicTypeName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMusicTypeResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(MusicType, musicType_);
      DARABONBA_PTR_FROM_JSON(MusicTypeName, musicTypeName_);
    };
    QueryMusicTypeResponseBodyResult() = default ;
    QueryMusicTypeResponseBodyResult(const QueryMusicTypeResponseBodyResult &) = default ;
    QueryMusicTypeResponseBodyResult(QueryMusicTypeResponseBodyResult &&) = default ;
    QueryMusicTypeResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMusicTypeResponseBodyResult() = default ;
    QueryMusicTypeResponseBodyResult& operator=(const QueryMusicTypeResponseBodyResult &) = default ;
    QueryMusicTypeResponseBodyResult& operator=(QueryMusicTypeResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->musicType_ != nullptr
        && this->musicTypeName_ != nullptr; };
    // musicType Field Functions 
    bool hasMusicType() const { return this->musicType_ != nullptr;};
    void deleteMusicType() { this->musicType_ = nullptr;};
    inline int64_t musicType() const { DARABONBA_PTR_GET_DEFAULT(musicType_, 0L) };
    inline QueryMusicTypeResponseBodyResult& setMusicType(int64_t musicType) { DARABONBA_PTR_SET_VALUE(musicType_, musicType) };


    // musicTypeName Field Functions 
    bool hasMusicTypeName() const { return this->musicTypeName_ != nullptr;};
    void deleteMusicTypeName() { this->musicTypeName_ = nullptr;};
    inline string musicTypeName() const { DARABONBA_PTR_GET_DEFAULT(musicTypeName_, "") };
    inline QueryMusicTypeResponseBodyResult& setMusicTypeName(string musicTypeName) { DARABONBA_PTR_SET_VALUE(musicTypeName_, musicTypeName) };


  protected:
    std::shared_ptr<int64_t> musicType_ = nullptr;
    std::shared_ptr<string> musicTypeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
