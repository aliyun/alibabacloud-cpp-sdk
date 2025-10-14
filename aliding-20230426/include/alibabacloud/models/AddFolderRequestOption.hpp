// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFOLDERREQUESTOPTION_HPP_
#define ALIBABACLOUD_MODELS_ADDFOLDERREQUESTOPTION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddFolderRequestOptionAppProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddFolderRequestOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFolderRequestOption& obj) { 
      DARABONBA_PTR_TO_JSON(AppProperties, appProperties_);
      DARABONBA_PTR_TO_JSON(ConflictStrategy, conflictStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, AddFolderRequestOption& obj) { 
      DARABONBA_PTR_FROM_JSON(AppProperties, appProperties_);
      DARABONBA_PTR_FROM_JSON(ConflictStrategy, conflictStrategy_);
    };
    AddFolderRequestOption() = default ;
    AddFolderRequestOption(const AddFolderRequestOption &) = default ;
    AddFolderRequestOption(AddFolderRequestOption &&) = default ;
    AddFolderRequestOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFolderRequestOption() = default ;
    AddFolderRequestOption& operator=(const AddFolderRequestOption &) = default ;
    AddFolderRequestOption& operator=(AddFolderRequestOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appProperties_ == nullptr
        && return this->conflictStrategy_ == nullptr; };
    // appProperties Field Functions 
    bool hasAppProperties() const { return this->appProperties_ != nullptr;};
    void deleteAppProperties() { this->appProperties_ = nullptr;};
    inline const vector<Models::AddFolderRequestOptionAppProperties> & appProperties() const { DARABONBA_PTR_GET_CONST(appProperties_, vector<Models::AddFolderRequestOptionAppProperties>) };
    inline vector<Models::AddFolderRequestOptionAppProperties> appProperties() { DARABONBA_PTR_GET(appProperties_, vector<Models::AddFolderRequestOptionAppProperties>) };
    inline AddFolderRequestOption& setAppProperties(const vector<Models::AddFolderRequestOptionAppProperties> & appProperties) { DARABONBA_PTR_SET_VALUE(appProperties_, appProperties) };
    inline AddFolderRequestOption& setAppProperties(vector<Models::AddFolderRequestOptionAppProperties> && appProperties) { DARABONBA_PTR_SET_RVALUE(appProperties_, appProperties) };


    // conflictStrategy Field Functions 
    bool hasConflictStrategy() const { return this->conflictStrategy_ != nullptr;};
    void deleteConflictStrategy() { this->conflictStrategy_ = nullptr;};
    inline string conflictStrategy() const { DARABONBA_PTR_GET_DEFAULT(conflictStrategy_, "") };
    inline AddFolderRequestOption& setConflictStrategy(string conflictStrategy) { DARABONBA_PTR_SET_VALUE(conflictStrategy_, conflictStrategy) };


  protected:
    std::shared_ptr<vector<Models::AddFolderRequestOptionAppProperties>> appProperties_ = nullptr;
    std::shared_ptr<string> conflictStrategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
