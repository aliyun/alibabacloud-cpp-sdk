// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TARGETSUBTITLE_HPP_
#define ALIBABACLOUD_MODELS_TARGETSUBTITLE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TargetSubtitleExtractSubtitle.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class TargetSubtitle : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TargetSubtitle& obj) { 
      DARABONBA_PTR_TO_JSON(DisableSubtitle, disableSubtitle_);
      DARABONBA_PTR_TO_JSON(ExtractSubtitle, extractSubtitle_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
    };
    friend void from_json(const Darabonba::Json& j, TargetSubtitle& obj) { 
      DARABONBA_PTR_FROM_JSON(DisableSubtitle, disableSubtitle_);
      DARABONBA_PTR_FROM_JSON(ExtractSubtitle, extractSubtitle_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
    };
    TargetSubtitle() = default ;
    TargetSubtitle(const TargetSubtitle &) = default ;
    TargetSubtitle(TargetSubtitle &&) = default ;
    TargetSubtitle(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TargetSubtitle() = default ;
    TargetSubtitle& operator=(const TargetSubtitle &) = default ;
    TargetSubtitle& operator=(TargetSubtitle &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->disableSubtitle_ != nullptr
        && this->extractSubtitle_ != nullptr && this->stream_ != nullptr; };
    // disableSubtitle Field Functions 
    bool hasDisableSubtitle() const { return this->disableSubtitle_ != nullptr;};
    void deleteDisableSubtitle() { this->disableSubtitle_ = nullptr;};
    inline bool disableSubtitle() const { DARABONBA_PTR_GET_DEFAULT(disableSubtitle_, false) };
    inline TargetSubtitle& setDisableSubtitle(bool disableSubtitle) { DARABONBA_PTR_SET_VALUE(disableSubtitle_, disableSubtitle) };


    // extractSubtitle Field Functions 
    bool hasExtractSubtitle() const { return this->extractSubtitle_ != nullptr;};
    void deleteExtractSubtitle() { this->extractSubtitle_ = nullptr;};
    inline const TargetSubtitleExtractSubtitle & extractSubtitle() const { DARABONBA_PTR_GET_CONST(extractSubtitle_, TargetSubtitleExtractSubtitle) };
    inline TargetSubtitleExtractSubtitle extractSubtitle() { DARABONBA_PTR_GET(extractSubtitle_, TargetSubtitleExtractSubtitle) };
    inline TargetSubtitle& setExtractSubtitle(const TargetSubtitleExtractSubtitle & extractSubtitle) { DARABONBA_PTR_SET_VALUE(extractSubtitle_, extractSubtitle) };
    inline TargetSubtitle& setExtractSubtitle(TargetSubtitleExtractSubtitle && extractSubtitle) { DARABONBA_PTR_SET_RVALUE(extractSubtitle_, extractSubtitle) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline const vector<int32_t> & stream() const { DARABONBA_PTR_GET_CONST(stream_, vector<int32_t>) };
    inline vector<int32_t> stream() { DARABONBA_PTR_GET(stream_, vector<int32_t>) };
    inline TargetSubtitle& setStream(const vector<int32_t> & stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };
    inline TargetSubtitle& setStream(vector<int32_t> && stream) { DARABONBA_PTR_SET_RVALUE(stream_, stream) };


  protected:
    std::shared_ptr<bool> disableSubtitle_ = nullptr;
    std::shared_ptr<TargetSubtitleExtractSubtitle> extractSubtitle_ = nullptr;
    std::shared_ptr<vector<int32_t>> stream_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
