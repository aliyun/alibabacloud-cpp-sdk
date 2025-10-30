// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERBYSOURCEIDRESPONSEBODYUSER_HPP_
#define ALIBABACLOUD_MODELS_GETUSERBYSOURCEIDRESPONSEBODYUSER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetUserBySourceIdResponseBodyUser : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserBySourceIdResponseBodyUser& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserBySourceIdResponseBodyUser& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    GetUserBySourceIdResponseBodyUser() = default ;
    GetUserBySourceIdResponseBodyUser(const GetUserBySourceIdResponseBodyUser &) = default ;
    GetUserBySourceIdResponseBodyUser(GetUserBySourceIdResponseBodyUser &&) = default ;
    GetUserBySourceIdResponseBodyUser(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserBySourceIdResponseBodyUser() = default ;
    GetUserBySourceIdResponseBodyUser& operator=(const GetUserBySourceIdResponseBodyUser &) = default ;
    GetUserBySourceIdResponseBodyUser& operator=(GetUserBySourceIdResponseBodyUser &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && return this->id_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetUserBySourceIdResponseBodyUser& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetUserBySourceIdResponseBodyUser& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
