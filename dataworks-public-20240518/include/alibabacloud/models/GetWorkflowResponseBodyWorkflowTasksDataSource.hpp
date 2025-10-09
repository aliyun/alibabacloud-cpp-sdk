// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWRESPONSEBODYWORKFLOWTASKSDATASOURCE_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWRESPONSEBODYWORKFLOWTASKSDATASOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetWorkflowResponseBodyWorkflowTasksDataSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowResponseBodyWorkflowTasksDataSource& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowResponseBodyWorkflowTasksDataSource& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetWorkflowResponseBodyWorkflowTasksDataSource() = default ;
    GetWorkflowResponseBodyWorkflowTasksDataSource(const GetWorkflowResponseBodyWorkflowTasksDataSource &) = default ;
    GetWorkflowResponseBodyWorkflowTasksDataSource(GetWorkflowResponseBodyWorkflowTasksDataSource &&) = default ;
    GetWorkflowResponseBodyWorkflowTasksDataSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowResponseBodyWorkflowTasksDataSource() = default ;
    GetWorkflowResponseBodyWorkflowTasksDataSource& operator=(const GetWorkflowResponseBodyWorkflowTasksDataSource &) = default ;
    GetWorkflowResponseBodyWorkflowTasksDataSource& operator=(GetWorkflowResponseBodyWorkflowTasksDataSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetWorkflowResponseBodyWorkflowTasksDataSource& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The name of the data source.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
