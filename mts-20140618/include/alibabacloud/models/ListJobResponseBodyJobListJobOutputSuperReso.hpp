// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTSUPERRESO_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODYJOBLISTJOBOUTPUTSUPERRESO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListJobResponseBodyJobListJobOutputSuperReso : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobResponseBodyJobListJobOutputSuperReso& obj) { 
      DARABONBA_PTR_TO_JSON(IsHalfSample, isHalfSample_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobResponseBodyJobListJobOutputSuperReso& obj) { 
      DARABONBA_PTR_FROM_JSON(IsHalfSample, isHalfSample_);
    };
    ListJobResponseBodyJobListJobOutputSuperReso() = default ;
    ListJobResponseBodyJobListJobOutputSuperReso(const ListJobResponseBodyJobListJobOutputSuperReso &) = default ;
    ListJobResponseBodyJobListJobOutputSuperReso(ListJobResponseBodyJobListJobOutputSuperReso &&) = default ;
    ListJobResponseBodyJobListJobOutputSuperReso(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobResponseBodyJobListJobOutputSuperReso() = default ;
    ListJobResponseBodyJobListJobOutputSuperReso& operator=(const ListJobResponseBodyJobListJobOutputSuperReso &) = default ;
    ListJobResponseBodyJobListJobOutputSuperReso& operator=(ListJobResponseBodyJobListJobOutputSuperReso &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isHalfSample_ == nullptr; };
    // isHalfSample Field Functions 
    bool hasIsHalfSample() const { return this->isHalfSample_ != nullptr;};
    void deleteIsHalfSample() { this->isHalfSample_ = nullptr;};
    inline string isHalfSample() const { DARABONBA_PTR_GET_DEFAULT(isHalfSample_, "") };
    inline ListJobResponseBodyJobListJobOutputSuperReso& setIsHalfSample(string isHalfSample) { DARABONBA_PTR_SET_VALUE(isHalfSample_, isHalfSample) };


  protected:
    // Indicates whether parameters related to the sampling rate are obtained. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<string> isHalfSample_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
