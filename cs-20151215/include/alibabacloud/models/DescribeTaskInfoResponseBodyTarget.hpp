// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKINFORESPONSEBODYTARGET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKINFORESPONSEBODYTARGET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeTaskInfoResponseBodyTarget : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTaskInfoResponseBodyTarget& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTaskInfoResponseBodyTarget& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DescribeTaskInfoResponseBodyTarget() = default ;
    DescribeTaskInfoResponseBodyTarget(const DescribeTaskInfoResponseBodyTarget &) = default ;
    DescribeTaskInfoResponseBodyTarget(DescribeTaskInfoResponseBodyTarget &&) = default ;
    DescribeTaskInfoResponseBodyTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTaskInfoResponseBodyTarget() = default ;
    DescribeTaskInfoResponseBodyTarget& operator=(const DescribeTaskInfoResponseBodyTarget &) = default ;
    DescribeTaskInfoResponseBodyTarget& operator=(DescribeTaskInfoResponseBodyTarget &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->type_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeTaskInfoResponseBodyTarget& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeTaskInfoResponseBodyTarget& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the object.
    std::shared_ptr<string> id_ = nullptr;
    // The type of the object.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
