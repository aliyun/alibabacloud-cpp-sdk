// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKRUNRESPONSEBODYRESULTCHECKSUITE_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKRUNRESPONSEBODYRESULTCHECKSUITE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetCheckRunResponseBodyResultCheckSuite : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckRunResponseBodyResultCheckSuite& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckRunResponseBodyResultCheckSuite& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
    };
    GetCheckRunResponseBodyResultCheckSuite() = default ;
    GetCheckRunResponseBodyResultCheckSuite(const GetCheckRunResponseBodyResultCheckSuite &) = default ;
    GetCheckRunResponseBodyResultCheckSuite(GetCheckRunResponseBodyResultCheckSuite &&) = default ;
    GetCheckRunResponseBodyResultCheckSuite(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckRunResponseBodyResultCheckSuite() = default ;
    GetCheckRunResponseBodyResultCheckSuite& operator=(const GetCheckRunResponseBodyResultCheckSuite &) = default ;
    GetCheckRunResponseBodyResultCheckSuite& operator=(GetCheckRunResponseBodyResultCheckSuite &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetCheckRunResponseBodyResultCheckSuite& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
