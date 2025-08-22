// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTINECODEREVISIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTINECODEREVISIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeRoutineCodeRevisionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRoutineCodeRevisionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SelectCodeRevision, selectCodeRevision_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRoutineCodeRevisionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SelectCodeRevision, selectCodeRevision_);
    };
    DescribeRoutineCodeRevisionRequest() = default ;
    DescribeRoutineCodeRevisionRequest(const DescribeRoutineCodeRevisionRequest &) = default ;
    DescribeRoutineCodeRevisionRequest(DescribeRoutineCodeRevisionRequest &&) = default ;
    DescribeRoutineCodeRevisionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRoutineCodeRevisionRequest() = default ;
    DescribeRoutineCodeRevisionRequest& operator=(const DescribeRoutineCodeRevisionRequest &) = default ;
    DescribeRoutineCodeRevisionRequest& operator=(DescribeRoutineCodeRevisionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->selectCodeRevision_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeRoutineCodeRevisionRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // selectCodeRevision Field Functions 
    bool hasSelectCodeRevision() const { return this->selectCodeRevision_ != nullptr;};
    void deleteSelectCodeRevision() { this->selectCodeRevision_ = nullptr;};
    inline string selectCodeRevision() const { DARABONBA_PTR_GET_DEFAULT(selectCodeRevision_, "") };
    inline DescribeRoutineCodeRevisionRequest& setSelectCodeRevision(string selectCodeRevision) { DARABONBA_PTR_SET_VALUE(selectCodeRevision_, selectCodeRevision) };


  protected:
    // The name of the routine. The name must be unique among the routines that belong to the same Alibaba Cloud account.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The version of the JavaScript code that you want to query.
    // 
    // This parameter is required.
    std::shared_ptr<string> selectCodeRevision_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
