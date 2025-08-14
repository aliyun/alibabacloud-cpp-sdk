// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPACKAGEJOBSRESPONSEBODYPACKAGEJOBLISTPACKAGEJOBSINPUTS_HPP_
#define ALIBABACLOUD_MODELS_LISTPACKAGEJOBSRESPONSEBODYPACKAGEJOBLISTPACKAGEJOBSINPUTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListPackageJobsResponseBodyPackageJobListPackageJobsInputsInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListPackageJobsResponseBodyPackageJobListPackageJobsInputs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPackageJobsResponseBodyPackageJobListPackageJobsInputs& obj) { 
      DARABONBA_PTR_TO_JSON(Input, input_);
    };
    friend void from_json(const Darabonba::Json& j, ListPackageJobsResponseBodyPackageJobListPackageJobsInputs& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, input_);
    };
    ListPackageJobsResponseBodyPackageJobListPackageJobsInputs() = default ;
    ListPackageJobsResponseBodyPackageJobListPackageJobsInputs(const ListPackageJobsResponseBodyPackageJobListPackageJobsInputs &) = default ;
    ListPackageJobsResponseBodyPackageJobListPackageJobsInputs(ListPackageJobsResponseBodyPackageJobListPackageJobsInputs &&) = default ;
    ListPackageJobsResponseBodyPackageJobListPackageJobsInputs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPackageJobsResponseBodyPackageJobListPackageJobsInputs() = default ;
    ListPackageJobsResponseBodyPackageJobListPackageJobsInputs& operator=(const ListPackageJobsResponseBodyPackageJobListPackageJobsInputs &) = default ;
    ListPackageJobsResponseBodyPackageJobListPackageJobsInputs& operator=(ListPackageJobsResponseBodyPackageJobListPackageJobsInputs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->input_ != nullptr; };
    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const Models::ListPackageJobsResponseBodyPackageJobListPackageJobsInputsInput & input() const { DARABONBA_PTR_GET_CONST(input_, Models::ListPackageJobsResponseBodyPackageJobListPackageJobsInputsInput) };
    inline Models::ListPackageJobsResponseBodyPackageJobListPackageJobsInputsInput input() { DARABONBA_PTR_GET(input_, Models::ListPackageJobsResponseBodyPackageJobListPackageJobsInputsInput) };
    inline ListPackageJobsResponseBodyPackageJobListPackageJobsInputs& setInput(const Models::ListPackageJobsResponseBodyPackageJobListPackageJobsInputsInput & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline ListPackageJobsResponseBodyPackageJobListPackageJobsInputs& setInput(Models::ListPackageJobsResponseBodyPackageJobListPackageJobsInputsInput && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


  protected:
    // The information about the input stream file.
    std::shared_ptr<Models::ListPackageJobsResponseBodyPackageJobListPackageJobsInputsInput> input_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
