// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFOTASKSTASKSPECRESOURCEDISKS_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFOTASKSTASKSPECRESOURCEDISKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetJobResponseBodyJobInfoTasksTaskSpecResourceDisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBodyJobInfoTasksTaskSpecResourceDisks& obj) { 
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBodyJobInfoTasksTaskSpecResourceDisks& obj) { 
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetJobResponseBodyJobInfoTasksTaskSpecResourceDisks() = default ;
    GetJobResponseBodyJobInfoTasksTaskSpecResourceDisks(const GetJobResponseBodyJobInfoTasksTaskSpecResourceDisks &) = default ;
    GetJobResponseBodyJobInfoTasksTaskSpecResourceDisks(GetJobResponseBodyJobInfoTasksTaskSpecResourceDisks &&) = default ;
    GetJobResponseBodyJobInfoTasksTaskSpecResourceDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBodyJobInfoTasksTaskSpecResourceDisks() = default ;
    GetJobResponseBodyJobInfoTasksTaskSpecResourceDisks& operator=(const GetJobResponseBodyJobInfoTasksTaskSpecResourceDisks &) = default ;
    GetJobResponseBodyJobInfoTasksTaskSpecResourceDisks& operator=(GetJobResponseBodyJobInfoTasksTaskSpecResourceDisks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->size_ == nullptr
        && return this->type_ == nullptr; };
    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline GetJobResponseBodyJobInfoTasksTaskSpecResourceDisks& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetJobResponseBodyJobInfoTasksTaskSpecResourceDisks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The size of the disk.
    std::shared_ptr<int32_t> size_ = nullptr;
    // The type of the disk. The following disk categories are supported:
    // 
    // *   System: system disk.
    // *   Data: data disk.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
