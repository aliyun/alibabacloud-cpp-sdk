// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONTAINERDEFENSERULEDETAILRESPONSEBODYDATAWHITELIST_HPP_
#define ALIBABACLOUD_MODELS_GETCONTAINERDEFENSERULEDETAILRESPONSEBODYDATAWHITELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetContainerDefenseRuleDetailResponseBodyDataWhitelist : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetContainerDefenseRuleDetailResponseBodyDataWhitelist& obj) { 
      DARABONBA_PTR_TO_JSON(Hash, hash_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(Path, path_);
    };
    friend void from_json(const Darabonba::Json& j, GetContainerDefenseRuleDetailResponseBodyDataWhitelist& obj) { 
      DARABONBA_PTR_FROM_JSON(Hash, hash_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
    };
    GetContainerDefenseRuleDetailResponseBodyDataWhitelist() = default ;
    GetContainerDefenseRuleDetailResponseBodyDataWhitelist(const GetContainerDefenseRuleDetailResponseBodyDataWhitelist &) = default ;
    GetContainerDefenseRuleDetailResponseBodyDataWhitelist(GetContainerDefenseRuleDetailResponseBodyDataWhitelist &&) = default ;
    GetContainerDefenseRuleDetailResponseBodyDataWhitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetContainerDefenseRuleDetailResponseBodyDataWhitelist() = default ;
    GetContainerDefenseRuleDetailResponseBodyDataWhitelist& operator=(const GetContainerDefenseRuleDetailResponseBodyDataWhitelist &) = default ;
    GetContainerDefenseRuleDetailResponseBodyDataWhitelist& operator=(GetContainerDefenseRuleDetailResponseBodyDataWhitelist &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hash_ == nullptr
        && return this->image_ == nullptr && return this->path_ == nullptr; };
    // hash Field Functions 
    bool hasHash() const { return this->hash_ != nullptr;};
    void deleteHash() { this->hash_ = nullptr;};
    inline const vector<string> & hash() const { DARABONBA_PTR_GET_CONST(hash_, vector<string>) };
    inline vector<string> hash() { DARABONBA_PTR_GET(hash_, vector<string>) };
    inline GetContainerDefenseRuleDetailResponseBodyDataWhitelist& setHash(const vector<string> & hash) { DARABONBA_PTR_SET_VALUE(hash_, hash) };
    inline GetContainerDefenseRuleDetailResponseBodyDataWhitelist& setHash(vector<string> && hash) { DARABONBA_PTR_SET_RVALUE(hash_, hash) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline const vector<string> & image() const { DARABONBA_PTR_GET_CONST(image_, vector<string>) };
    inline vector<string> image() { DARABONBA_PTR_GET(image_, vector<string>) };
    inline GetContainerDefenseRuleDetailResponseBodyDataWhitelist& setImage(const vector<string> & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
    inline GetContainerDefenseRuleDetailResponseBodyDataWhitelist& setImage(vector<string> && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline const vector<string> & path() const { DARABONBA_PTR_GET_CONST(path_, vector<string>) };
    inline vector<string> path() { DARABONBA_PTR_GET(path_, vector<string>) };
    inline GetContainerDefenseRuleDetailResponseBodyDataWhitelist& setPath(const vector<string> & path) { DARABONBA_PTR_SET_VALUE(path_, path) };
    inline GetContainerDefenseRuleDetailResponseBodyDataWhitelist& setPath(vector<string> && path) { DARABONBA_PTR_SET_RVALUE(path_, path) };


  protected:
    // The hash values of the files that are added to the whitelist.
    // 
    // >  This parameter is not supported.
    std::shared_ptr<vector<string>> hash_ = nullptr;
    // An array consisting of images that are added to the whitelist.
    std::shared_ptr<vector<string>> image_ = nullptr;
    // The paths to the files that are added to the whitelist.
    std::shared_ptr<vector<string>> path_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
