// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READPAGEBODYREADABILITY_HPP_
#define ALIBABACLOUD_MODELS_READPAGEBODYREADABILITY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class ReadPageBodyReadability : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadPageBodyReadability& obj) { 
      DARABONBA_PTR_TO_JSON(excludeAllImages, excludeAllImages_);
      DARABONBA_PTR_TO_JSON(excludeAllLinks, excludeAllLinks_);
      DARABONBA_PTR_TO_JSON(excludedTags, excludedTags_);
      DARABONBA_PTR_TO_JSON(readabilityMode, readabilityMode_);
    };
    friend void from_json(const Darabonba::Json& j, ReadPageBodyReadability& obj) { 
      DARABONBA_PTR_FROM_JSON(excludeAllImages, excludeAllImages_);
      DARABONBA_PTR_FROM_JSON(excludeAllLinks, excludeAllLinks_);
      DARABONBA_PTR_FROM_JSON(excludedTags, excludedTags_);
      DARABONBA_PTR_FROM_JSON(readabilityMode, readabilityMode_);
    };
    ReadPageBodyReadability() = default ;
    ReadPageBodyReadability(const ReadPageBodyReadability &) = default ;
    ReadPageBodyReadability(ReadPageBodyReadability &&) = default ;
    ReadPageBodyReadability(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadPageBodyReadability() = default ;
    ReadPageBodyReadability& operator=(const ReadPageBodyReadability &) = default ;
    ReadPageBodyReadability& operator=(ReadPageBodyReadability &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->excludeAllImages_ != nullptr
        && this->excludeAllLinks_ != nullptr && this->excludedTags_ != nullptr && this->readabilityMode_ != nullptr; };
    // excludeAllImages Field Functions 
    bool hasExcludeAllImages() const { return this->excludeAllImages_ != nullptr;};
    void deleteExcludeAllImages() { this->excludeAllImages_ = nullptr;};
    inline bool excludeAllImages() const { DARABONBA_PTR_GET_DEFAULT(excludeAllImages_, false) };
    inline ReadPageBodyReadability& setExcludeAllImages(bool excludeAllImages) { DARABONBA_PTR_SET_VALUE(excludeAllImages_, excludeAllImages) };


    // excludeAllLinks Field Functions 
    bool hasExcludeAllLinks() const { return this->excludeAllLinks_ != nullptr;};
    void deleteExcludeAllLinks() { this->excludeAllLinks_ = nullptr;};
    inline bool excludeAllLinks() const { DARABONBA_PTR_GET_DEFAULT(excludeAllLinks_, false) };
    inline ReadPageBodyReadability& setExcludeAllLinks(bool excludeAllLinks) { DARABONBA_PTR_SET_VALUE(excludeAllLinks_, excludeAllLinks) };


    // excludedTags Field Functions 
    bool hasExcludedTags() const { return this->excludedTags_ != nullptr;};
    void deleteExcludedTags() { this->excludedTags_ = nullptr;};
    inline const vector<string> & excludedTags() const { DARABONBA_PTR_GET_CONST(excludedTags_, vector<string>) };
    inline vector<string> excludedTags() { DARABONBA_PTR_GET(excludedTags_, vector<string>) };
    inline ReadPageBodyReadability& setExcludedTags(const vector<string> & excludedTags) { DARABONBA_PTR_SET_VALUE(excludedTags_, excludedTags) };
    inline ReadPageBodyReadability& setExcludedTags(vector<string> && excludedTags) { DARABONBA_PTR_SET_RVALUE(excludedTags_, excludedTags) };


    // readabilityMode Field Functions 
    bool hasReadabilityMode() const { return this->readabilityMode_ != nullptr;};
    void deleteReadabilityMode() { this->readabilityMode_ = nullptr;};
    inline string readabilityMode() const { DARABONBA_PTR_GET_DEFAULT(readabilityMode_, "") };
    inline ReadPageBodyReadability& setReadabilityMode(string readabilityMode) { DARABONBA_PTR_SET_VALUE(readabilityMode_, readabilityMode) };


  protected:
    std::shared_ptr<bool> excludeAllImages_ = nullptr;
    std::shared_ptr<bool> excludeAllLinks_ = nullptr;
    std::shared_ptr<vector<string>> excludedTags_ = nullptr;
    std::shared_ptr<string> readabilityMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
