// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHUPDATETASKSREQUESTTASKSDATASOURCE_HPP_
#define ALIBABACLOUD_MODELS_BATCHUPDATETASKSREQUESTTASKSDATASOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class BatchUpdateTasksRequestTasksDataSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchUpdateTasksRequestTasksDataSource& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, BatchUpdateTasksRequestTasksDataSource& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    BatchUpdateTasksRequestTasksDataSource() = default ;
    BatchUpdateTasksRequestTasksDataSource(const BatchUpdateTasksRequestTasksDataSource &) = default ;
    BatchUpdateTasksRequestTasksDataSource(BatchUpdateTasksRequestTasksDataSource &&) = default ;
    BatchUpdateTasksRequestTasksDataSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchUpdateTasksRequestTasksDataSource() = default ;
    BatchUpdateTasksRequestTasksDataSource& operator=(const BatchUpdateTasksRequestTasksDataSource &) = default ;
    BatchUpdateTasksRequestTasksDataSource& operator=(BatchUpdateTasksRequestTasksDataSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline BatchUpdateTasksRequestTasksDataSource& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The data source name.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
