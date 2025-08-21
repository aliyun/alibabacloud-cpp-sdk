// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDANDREMOVEFAVORITECONTENTREQUESTOPENADDANDREMOVEFAVORITECONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDANDREMOVEFAVORITECONTENTREQUESTOPENADDANDREMOVEFAVORITECONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequestOpenSourceRawIdPair.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FavoriteCmd, favoriteCmd_);
      DARABONBA_PTR_TO_JSON(OpenSourceRawIdPair, openSourceRawIdPair_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
    };
    friend void from_json(const Darabonba::Json& j, AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FavoriteCmd, favoriteCmd_);
      DARABONBA_PTR_FROM_JSON(OpenSourceRawIdPair, openSourceRawIdPair_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
    };
    AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest() = default ;
    AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest(const AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest &) = default ;
    AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest(AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest &&) = default ;
    AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest() = default ;
    AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest& operator=(const AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest &) = default ;
    AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest& operator=(AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->favoriteCmd_ != nullptr
        && this->openSourceRawIdPair_ != nullptr && this->packageType_ != nullptr; };
    // favoriteCmd Field Functions 
    bool hasFavoriteCmd() const { return this->favoriteCmd_ != nullptr;};
    void deleteFavoriteCmd() { this->favoriteCmd_ = nullptr;};
    inline string favoriteCmd() const { DARABONBA_PTR_GET_DEFAULT(favoriteCmd_, "") };
    inline AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest& setFavoriteCmd(string favoriteCmd) { DARABONBA_PTR_SET_VALUE(favoriteCmd_, favoriteCmd) };


    // openSourceRawIdPair Field Functions 
    bool hasOpenSourceRawIdPair() const { return this->openSourceRawIdPair_ != nullptr;};
    void deleteOpenSourceRawIdPair() { this->openSourceRawIdPair_ = nullptr;};
    inline const Models::AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequestOpenSourceRawIdPair & openSourceRawIdPair() const { DARABONBA_PTR_GET_CONST(openSourceRawIdPair_, Models::AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequestOpenSourceRawIdPair) };
    inline Models::AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequestOpenSourceRawIdPair openSourceRawIdPair() { DARABONBA_PTR_GET(openSourceRawIdPair_, Models::AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequestOpenSourceRawIdPair) };
    inline AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest& setOpenSourceRawIdPair(const Models::AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequestOpenSourceRawIdPair & openSourceRawIdPair) { DARABONBA_PTR_SET_VALUE(openSourceRawIdPair_, openSourceRawIdPair) };
    inline AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest& setOpenSourceRawIdPair(Models::AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequestOpenSourceRawIdPair && openSourceRawIdPair) { DARABONBA_PTR_SET_RVALUE(openSourceRawIdPair_, openSourceRawIdPair) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string packageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequest& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> favoriteCmd_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Models::AddAndRemoveFavoriteContentRequestOpenAddAndRemoveFavoriteContentRequestOpenSourceRawIdPair> openSourceRawIdPair_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> packageType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
