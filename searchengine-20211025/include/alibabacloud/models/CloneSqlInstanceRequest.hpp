// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLONESQLINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLONESQLINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class CloneSqlInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloneSqlInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(targetFolderId, targetFolderId_);
    };
    friend void from_json(const Darabonba::Json& j, CloneSqlInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(targetFolderId, targetFolderId_);
    };
    CloneSqlInstanceRequest() = default ;
    CloneSqlInstanceRequest(const CloneSqlInstanceRequest &) = default ;
    CloneSqlInstanceRequest(CloneSqlInstanceRequest &&) = default ;
    CloneSqlInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloneSqlInstanceRequest() = default ;
    CloneSqlInstanceRequest& operator=(const CloneSqlInstanceRequest &) = default ;
    CloneSqlInstanceRequest& operator=(CloneSqlInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->targetFolderId_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CloneSqlInstanceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // targetFolderId Field Functions 
    bool hasTargetFolderId() const { return this->targetFolderId_ != nullptr;};
    void deleteTargetFolderId() { this->targetFolderId_ = nullptr;};
    inline int64_t targetFolderId() const { DARABONBA_PTR_GET_DEFAULT(targetFolderId_, 0L) };
    inline CloneSqlInstanceRequest& setTargetFolderId(int64_t targetFolderId) { DARABONBA_PTR_SET_VALUE(targetFolderId_, targetFolderId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> targetFolderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
