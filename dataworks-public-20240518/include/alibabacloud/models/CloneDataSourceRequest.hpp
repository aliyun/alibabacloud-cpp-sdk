// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLONEDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLONEDATASOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CloneDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloneDataSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CloneDataSourceName, cloneDataSourceName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, CloneDataSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CloneDataSourceName, cloneDataSourceName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    CloneDataSourceRequest() = default ;
    CloneDataSourceRequest(const CloneDataSourceRequest &) = default ;
    CloneDataSourceRequest(CloneDataSourceRequest &&) = default ;
    CloneDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloneDataSourceRequest() = default ;
    CloneDataSourceRequest& operator=(const CloneDataSourceRequest &) = default ;
    CloneDataSourceRequest& operator=(CloneDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloneDataSourceName_ == nullptr
        && return this->id_ == nullptr; };
    // cloneDataSourceName Field Functions 
    bool hasCloneDataSourceName() const { return this->cloneDataSourceName_ != nullptr;};
    void deleteCloneDataSourceName() { this->cloneDataSourceName_ = nullptr;};
    inline string cloneDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(cloneDataSourceName_, "") };
    inline CloneDataSourceRequest& setCloneDataSourceName(string cloneDataSourceName) { DARABONBA_PTR_SET_VALUE(cloneDataSourceName_, cloneDataSourceName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CloneDataSourceRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The name of the destination data source The name can contain letters, digits, and underscores (_), and must start with a letter. It cannot exceed 60 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> cloneDataSourceName_ = nullptr;
    // The data source ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
