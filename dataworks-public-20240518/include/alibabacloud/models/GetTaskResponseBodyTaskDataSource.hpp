// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKRESPONSEBODYTASKDATASOURCE_HPP_
#define ALIBABACLOUD_MODELS_GETTASKRESPONSEBODYTASKDATASOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetTaskResponseBodyTaskDataSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskResponseBodyTaskDataSource& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskResponseBodyTaskDataSource& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetTaskResponseBodyTaskDataSource() = default ;
    GetTaskResponseBodyTaskDataSource(const GetTaskResponseBodyTaskDataSource &) = default ;
    GetTaskResponseBodyTaskDataSource(GetTaskResponseBodyTaskDataSource &&) = default ;
    GetTaskResponseBodyTaskDataSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskResponseBodyTaskDataSource() = default ;
    GetTaskResponseBodyTaskDataSource& operator=(const GetTaskResponseBodyTaskDataSource &) = default ;
    GetTaskResponseBodyTaskDataSource& operator=(GetTaskResponseBodyTaskDataSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetTaskResponseBodyTaskDataSource& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The name of the data source.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
