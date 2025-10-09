// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROUTINECODEVERSIONSRESPONSEBODYCODEVERSIONSCONFOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTROUTINECODEVERSIONSRESPONSEBODYCODEVERSIONSCONFOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListRoutineCodeVersionsResponseBodyCodeVersionsConfOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRoutineCodeVersionsResponseBodyCodeVersionsConfOptions& obj) { 
      DARABONBA_PTR_TO_JSON(NotFoundStrategy, notFoundStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, ListRoutineCodeVersionsResponseBodyCodeVersionsConfOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(NotFoundStrategy, notFoundStrategy_);
    };
    ListRoutineCodeVersionsResponseBodyCodeVersionsConfOptions() = default ;
    ListRoutineCodeVersionsResponseBodyCodeVersionsConfOptions(const ListRoutineCodeVersionsResponseBodyCodeVersionsConfOptions &) = default ;
    ListRoutineCodeVersionsResponseBodyCodeVersionsConfOptions(ListRoutineCodeVersionsResponseBodyCodeVersionsConfOptions &&) = default ;
    ListRoutineCodeVersionsResponseBodyCodeVersionsConfOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRoutineCodeVersionsResponseBodyCodeVersionsConfOptions() = default ;
    ListRoutineCodeVersionsResponseBodyCodeVersionsConfOptions& operator=(const ListRoutineCodeVersionsResponseBodyCodeVersionsConfOptions &) = default ;
    ListRoutineCodeVersionsResponseBodyCodeVersionsConfOptions& operator=(ListRoutineCodeVersionsResponseBodyCodeVersionsConfOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->notFoundStrategy_ != nullptr; };
    // notFoundStrategy Field Functions 
    bool hasNotFoundStrategy() const { return this->notFoundStrategy_ != nullptr;};
    void deleteNotFoundStrategy() { this->notFoundStrategy_ = nullptr;};
    inline string notFoundStrategy() const { DARABONBA_PTR_GET_DEFAULT(notFoundStrategy_, "") };
    inline ListRoutineCodeVersionsResponseBodyCodeVersionsConfOptions& setNotFoundStrategy(string notFoundStrategy) { DARABONBA_PTR_SET_VALUE(notFoundStrategy_, notFoundStrategy) };


  protected:
    // Code version configuration items NotFoundStrategy.
    std::shared_ptr<string> notFoundStrategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
