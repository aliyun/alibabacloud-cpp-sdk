// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESRESPONSEBODYRESOURCESEXECUTOR_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESRESPONSEBODYRESOURCESEXECUTOR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListResourcesResponseBodyResourcesExecutor : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcesResponseBodyResourcesExecutor& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcesResponseBodyResourcesExecutor& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    ListResourcesResponseBodyResourcesExecutor() = default ;
    ListResourcesResponseBodyResourcesExecutor(const ListResourcesResponseBodyResourcesExecutor &) = default ;
    ListResourcesResponseBodyResourcesExecutor(ListResourcesResponseBodyResourcesExecutor &&) = default ;
    ListResourcesResponseBodyResourcesExecutor(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcesResponseBodyResourcesExecutor() = default ;
    ListResourcesResponseBodyResourcesExecutor& operator=(const ListResourcesResponseBodyResourcesExecutor &) = default ;
    ListResourcesResponseBodyResourcesExecutor& operator=(ListResourcesResponseBodyResourcesExecutor &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerId_ == nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ListResourcesResponseBodyResourcesExecutor& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    // This parameter is invalid and deprecated.
    std::shared_ptr<string> ownerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
