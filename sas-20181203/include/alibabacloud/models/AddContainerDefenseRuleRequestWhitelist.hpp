// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCONTAINERDEFENSERULEREQUESTWHITELIST_HPP_
#define ALIBABACLOUD_MODELS_ADDCONTAINERDEFENSERULEREQUESTWHITELIST_HPP_
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
  class AddContainerDefenseRuleRequestWhitelist : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddContainerDefenseRuleRequestWhitelist& obj) { 
      DARABONBA_PTR_TO_JSON(Hash, hash_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(Path, path_);
    };
    friend void from_json(const Darabonba::Json& j, AddContainerDefenseRuleRequestWhitelist& obj) { 
      DARABONBA_PTR_FROM_JSON(Hash, hash_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
    };
    AddContainerDefenseRuleRequestWhitelist() = default ;
    AddContainerDefenseRuleRequestWhitelist(const AddContainerDefenseRuleRequestWhitelist &) = default ;
    AddContainerDefenseRuleRequestWhitelist(AddContainerDefenseRuleRequestWhitelist &&) = default ;
    AddContainerDefenseRuleRequestWhitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddContainerDefenseRuleRequestWhitelist() = default ;
    AddContainerDefenseRuleRequestWhitelist& operator=(const AddContainerDefenseRuleRequestWhitelist &) = default ;
    AddContainerDefenseRuleRequestWhitelist& operator=(AddContainerDefenseRuleRequestWhitelist &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hash_ != nullptr
        && this->image_ != nullptr && this->path_ != nullptr; };
    // hash Field Functions 
    bool hasHash() const { return this->hash_ != nullptr;};
    void deleteHash() { this->hash_ = nullptr;};
    inline const vector<string> & hash() const { DARABONBA_PTR_GET_CONST(hash_, vector<string>) };
    inline vector<string> hash() { DARABONBA_PTR_GET(hash_, vector<string>) };
    inline AddContainerDefenseRuleRequestWhitelist& setHash(const vector<string> & hash) { DARABONBA_PTR_SET_VALUE(hash_, hash) };
    inline AddContainerDefenseRuleRequestWhitelist& setHash(vector<string> && hash) { DARABONBA_PTR_SET_RVALUE(hash_, hash) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline const vector<string> & image() const { DARABONBA_PTR_GET_CONST(image_, vector<string>) };
    inline vector<string> image() { DARABONBA_PTR_GET(image_, vector<string>) };
    inline AddContainerDefenseRuleRequestWhitelist& setImage(const vector<string> & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
    inline AddContainerDefenseRuleRequestWhitelist& setImage(vector<string> && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline const vector<string> & path() const { DARABONBA_PTR_GET_CONST(path_, vector<string>) };
    inline vector<string> path() { DARABONBA_PTR_GET(path_, vector<string>) };
    inline AddContainerDefenseRuleRequestWhitelist& setPath(const vector<string> & path) { DARABONBA_PTR_SET_VALUE(path_, path) };
    inline AddContainerDefenseRuleRequestWhitelist& setPath(vector<string> && path) { DARABONBA_PTR_SET_RVALUE(path_, path) };


  protected:
    // The hash values of the files that need to be added to the whitelist.
    // 
    // > This parameter is not supported.
    std::shared_ptr<vector<string>> hash_ = nullptr;
    // The images that need to be added to the whitelist.
    std::shared_ptr<vector<string>> image_ = nullptr;
    // The paths to the files that need to be added to the whitelist.
    std::shared_ptr<vector<string>> path_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
