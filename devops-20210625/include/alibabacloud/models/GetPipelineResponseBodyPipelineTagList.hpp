// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINERESPONSEBODYPIPELINETAGLIST_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINERESPONSEBODYPIPELINETAGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetPipelineResponseBodyPipelineTagList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineResponseBodyPipelineTagList& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineResponseBodyPipelineTagList& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    GetPipelineResponseBodyPipelineTagList() = default ;
    GetPipelineResponseBodyPipelineTagList(const GetPipelineResponseBodyPipelineTagList &) = default ;
    GetPipelineResponseBodyPipelineTagList(GetPipelineResponseBodyPipelineTagList &&) = default ;
    GetPipelineResponseBodyPipelineTagList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineResponseBodyPipelineTagList() = default ;
    GetPipelineResponseBodyPipelineTagList& operator=(const GetPipelineResponseBodyPipelineTagList &) = default ;
    GetPipelineResponseBodyPipelineTagList& operator=(GetPipelineResponseBodyPipelineTagList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->name_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetPipelineResponseBodyPipelineTagList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetPipelineResponseBodyPipelineTagList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
